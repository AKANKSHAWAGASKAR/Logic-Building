// 4
//  1 *  2 * 

// Complexity 2N

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;  iCnt <= iNo; iCnt++)
    {
        printf("%d \t ",iCnt); // Dynamic (Variable Data)
        printf("*\t");         // Static  (Fixed Data)
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}