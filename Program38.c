#include<stdio.h>

void DisplayTable(int iNo)
{
  int iCnt = 0;
  printf("__________________________________________________\n");

  printf("Table of %d is : \n",iNo);
  printf("__________________________________________________\n");

   for(iCnt = 1;iCnt<=10;iCnt++)
   {
    printf("%d\n",iNo * iCnt);
   }
  printf("_____________________________________________________\n");
}

int main()
{
  int iValue = 0 ,iRet = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);

  DisplayTable(iValue);
  
  return 0;

}