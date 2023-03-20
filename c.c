
# include <stdio.h>

int ft_sorted(int *arr, int size)
{
	int i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return 0;
		else
			i ++;
	}
	return 1;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d\n", ft_sorted(arr, 10));
}
