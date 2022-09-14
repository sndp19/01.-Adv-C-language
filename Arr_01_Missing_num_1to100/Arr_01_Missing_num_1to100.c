/*
Name             :      Sandeep Varma Geddada
Date             :      17.04.2022
Program          :      Program to find a missing number in an array of 1 to 100 
Description      :      The Complete logic behind to find missing number in array is :
                        * As we know that the formula (n*(n+1))/2 to add a number series.
                        * where n is a number upto you want to add.
*/

#include <stdio.h>
//#include <conio.h>


void main()
{
        int i,n,sum = 0,missing;
        printf("Enter the size of the Array: "); 
        scanf("%d",&n);

        int arr[n-1];
        printf("Please enter values for the Array:");
        for(i=0;i<=n-1;i++)
        {
                scanf("%d",&arr[i]);
                sum += arr[i];
        }
        missing = (n*(n+1))/2 - sum;
        printf("missing number is = %d", missing);
        getchar();

}
