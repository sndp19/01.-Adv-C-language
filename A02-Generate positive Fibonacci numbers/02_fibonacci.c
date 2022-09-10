//Assignment No:2 WAP to generate positive Fibonacci numbers 

/*
Name             :      Sandeep Varma Geddada
Date             :      Program to  generate positive Fibonacci numbers
Description      :    
Sample Input     :    
Sample output    :   
 
*/

//START of Program

#include<stdio.h>

int main()
{

int num1 = 0,num2 = 1,input,temp;

printf("Enter a number: ");
scanf("%d",&input);

if(input >= 0)			 //if number is positive
{
 	printf(" %d,", num1);
	temp = num1 + num2; 	//storing summ of previous two numbers in temp
	while(num2 <= input)
	{
		printf(" %d,",num2);

		num1 = num2;	//swapping and fibonacci process
		num2 = temp;
		temp = num1 +num2;
	}

}
else
	printf("Invalid input");

return 0;
}



