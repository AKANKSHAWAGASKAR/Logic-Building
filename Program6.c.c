#include<stdio.h>

int main()
{
	int iNo1 = 0, iNo2 = 0;
	int iMult = 0;
	
	printf("Enter first number :\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number :\n");
	scanf("%d",&iNo2);
	
	printf("First number is :%d\n",iNo1);
	printf("Second number is :%d\n",iNo2);
	
    iMult = iNo1 * iNo2;  // Buisness logic 
	
	printf("Multiplication is : \n%d\n",iMult);
	
	return 0;
}
