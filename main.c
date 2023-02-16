#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./libft/libft.h"
#include "push_swap.h"

int main(int ac, char **av)
{
    int i;
    int j;
    const char *str;
    long    res;
    long    nbr;
    int    sign;
    // str = (const char *)av[1];
    // printf("%s", str);
    nbr = 0;
	res = 0;
    sign = 1;

    if (ac <= 1)
    {
        write(1, "empty input\n", 12);
        exit(1);
    }
    i = 1;

    // nbr = ft_atoi((const char *)av[1]);
    // printf("->%ld\n", nbr);
    // if (nbr < MIN_INT || nbr > MAX_INT)
    //     printf("---->%ld\n", nbr);
    while (av[i])
    {
        j = 0;
        res = 0;

        while (av[i][j]) 
        {
            if (av[i][j] == '-')
            {
                sign *= -1;
                j+= 1;
            }
            if (av[i][j] >= '0' && av[i][j] <= '9')
            {
                res = (res * 10) + av[i][j] - '0';
            }
            res *= sign;
            printf("%ld\n", res);
            if (res < MIN_INT || res > MAX_INT)
            {
                write(1, "error max or min intager ☃︎\n", 33);
                exit(1);
            }
            // if (!(av[i][j] >= '0' && av[i][j] <= '9'))
            // {
            //     printf("error ---> :\\\n");
            //     exit(1);
            // }
            j++;
        }
        printf("--->>>>>>>>>%ld\n", res);
        // printf("----->> %s\n",av[i]);
        // printf("----->> %ld\n", nbr);

        if (av[i][0] ==  '\0')
        {
            write(1, "1-error ♛\n", 13);
            exit(1);
        }
        i++;
    }
    return (0);
}