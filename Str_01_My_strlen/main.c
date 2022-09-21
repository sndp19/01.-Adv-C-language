//Question.Wap to implement Own Strlen function
/* ============================================================================================================================================
*Name		 :	Sandeep Varma Geddada
*Description	 :	Implementation of Own Strlen Function
*Sample Input	 :	str[] = "Hello"
*Sample output	 :	Size of string in  bytes using sizeof : 6
			Size of string in  bytes using strlen : 5
			Size of string in  bytes using my_strlen1 function : 5
			Size of string in  bytes using my_strlen2 function : 5
 
==================================================================================================================================================*/

//START of Program

#include <stdio.h>
#include <string.h>
size_t my_strlen1(const char *str)
{
	unsigned int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
size_t my_strlen2(char *str)
{
	char *ptr = str;
	while(*str++);
	return (str-ptr-1);
	

}
int main()
{
	char str[] = "Hello";
	printf("Size of string in  bytes using sizeof : %zu\n",sizeof(str));
	printf("Size of string in  bytes using strlen : %lu\n",strlen(str));
	printf("Size of string in  bytes using my_strlen1 function : %ld\n",my_strlen1(str));
	printf("Size of string in  bytes using my_strlen2 function : %lu\n",my_strlen2(str));

}
