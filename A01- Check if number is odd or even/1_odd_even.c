
//Assignment No:1 WAP to check if number is odd or even

/*
Name		 :	Sandeep Varma Geddada
Date		 :	17.03.2022
Description	 :	Program to check if number is odd or even
Sample Input	 :	
Sample output	 :
 
*/

//START of Program


#include<stdio.h>

int main()
{
	int num;		

	printf("Enter the value of 'n':");

	scanf("%d",&num);	
	
	if(num == 0)
		{	     			                  //if number is Zero
               		  printf("0 is neither odd nor even\n");
 				;
		}
			
	else if( num > 0 )	//if number is positive 

		{
			if( num % 2 == 0 )	//checking if input is even or not
			
				printf("%d is posiive even number\n",num);
			else 			//Enters if  input is odd
				printf("%d is posiive odd number\n",num);

		}
	else			//if input is negative	 

            {
                         if( num % 2 == 0 )      //checking if input is even or not
 
                                 printf("%d is negative even number\n",num);
                         else                    //Enters if  input is odd
                                 printf("%d is negative odd number\n",num);
 
               }


       
	return 0;


}

