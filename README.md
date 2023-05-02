# 海路 push_swap:

<img width="100%" src="https://velog.velcdn.com/images/haero_kim/post/f5361ffd-8a95-4c1c-9378-1fccd0a0557a/quick-sort-001.gif" />

Push_swap

Push_swap is a sorting algorithm project that involves writing two programs: a push_swap program and a checker program. The push_swap program takes a list of integers as arguments and outputs a series of operations that sorts the list. The checker program then takes the same list of integers and the series of operations from the push_swap program, and verifies whether the list is actually sorted.
Installation

The push_swap and checker programs are written in C and can be compiled using make. To compile the programs, navigate to the root directory of the project in a terminal and run the following command:

shell

make

This will compile both the push_swap and checker programs and place them in the ./src/ directory.
Usage
push_swap

To use the push_swap program, run the following command in the terminal:

shell

./push_swap [list of integers]

The push_swap program will take the list of integers as input and output a series of operations that sorts the list. The operations are printed to the standard output and can be piped to the checker program to verify that the list is sorted.
checker

To use the checker program, run the following command in the terminal:

shell

./checker [list of integers] [series of operations]

The checker program will take the list of integers and the series of operations as input and verify whether the list is sorted. If the list is sorted, the checker program will output OK. If the list is not sorted, the checker program will output KO.
Rules

The push_swap and checker programs operate on two stacks: stack A and stack B. The rules for manipulating the stacks are as follows:

    sa: swap the first two elements on stack A
    sb: swap the first two elements on stack B
    ss: sa and sb at the same time
    pa: move the first element from stack B to the top of stack A
    pb: move the first element from stack A to the top of stack B
    ra: rotate stack A so that the first element becomes the last element
    rb: rotate stack B so that the first element becomes the last element
    rr: ra and rb at the same time
    rra: reverse rotate stack A so that the last element becomes the first element
    rrb: reverse rotate stack B so that the last element becomes the first element
    rrr: rra and rrb at the same time

The objective of the push_swap program is to sort the list of integers using the above operations with the minimum possible number of operations. The checker program is used to verify that the list is actually sorted.

This video expain how push swap working : <br><br>
<a href="https://www.youtube.com/watch?v=ywWBy6J5gz8">
<img width="1023" alt="Screen Shot 2023-03-14 at 11 29 23 AM" src="https://user-images.githubusercontent.com/80540449/224972738-6d26c17a-0e84-4404-93a9-0caaa79dda78.png">
</a>

-----------------------------------------------------------------
<h2>Things you will learn in this project</h2>

    Data Structures (Stacks)
    Makefile
    Structs
    Sorting algorithms
    Memory leaks
    Problem-solving
-----------------------------------------------------------------
<h2>Implementation of push-swap (42-school project) on python with GUI</h2>

https://pypi.org/project/push-swap-gui/
-----------------------------------------------------------------
<h2>push_swap_tester</h2>

https://github.com/LeoFu9487/push_swap_tester
-----------------------------------------------------------------
<h2>42-corrections</h2>

https://github.com/rizky/42-corrections/blob/master/push_swap.pdf
-----------------------------------------------------------------

<a href="https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a">source</a>

<a href="https://www.youtube.com/watch?v=2aMrmWOgLvU">how to work by tester</a>
