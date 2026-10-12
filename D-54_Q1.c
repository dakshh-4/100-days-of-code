//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main()
{
    int n, x;
    int leftSum = 0, rightSum;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;
        for (int i = 1; i <= x; i++)
        {
            leftSum += i;
        }
        for (int i = x; i <= n; i++)
        {
            rightSum += i;
        }

        if (leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}