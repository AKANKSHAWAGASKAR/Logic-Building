#include<stdio.h>

void DisplayNonFactors(int iNo)
{
  int iCnt = 0;

  printf("Non factors of %d are :\n",iNo);
  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
    if((iNo % iCnt)!=0)
    {
      printf("%d\n",iCnt);
    }
  }

}

int main()
{
  int iValue = 0, iRet = 0;

  printf("enter the number \n");
 // sacnf("%d",&iValue);
  scanf("%d",&iValue);

  DisplayNonFactors(iValue);
return 0;
}