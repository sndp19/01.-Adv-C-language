//Assignment No:3 WAP to generate negative Fibonacci numbers 

/*
Name             :      Sandeep Varma Geddada
Date             :      18.03.2022
Description      :    	Program to  generate negative Fibonacci numbers
Sample Input     :      Program to  generate negative Fibonacci numbers
Sample output    :      0, 1, -1, 2, -3, 5, -8, 13, -21
 
*/

//START of Program

#include<stdio.h>
#include<math.h>

int main()
{

int abs,num1 = 0,num2 = 1,input,temp;

printf("Enter a number: ");
scanf("%d",&input);


if(input < 0)			 //if number is negative
{
 	printf(" %d,", num1);
	temp = num1 - num2; 	//storing substitute of previous two numbers in temp
	while( num2 >= input && num2 <= (-input) )
	{
		printf(" %d,",num2);

		num1 = num2;	//swapping and fibonacci process
		num2 = temp;
		temp = num1 - num2;
	}

}
else 				//if input is positive then is a invalid input
	printf("Invalid input");


printf("/n");
return 0;
}







