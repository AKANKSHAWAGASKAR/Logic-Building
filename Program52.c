
#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0, iSum = 0;

    while(iNo != 0)
    {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      iSum = iSum + iDigit;
    }

    return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Please enter number :\n");
  scanf("%d",&iValue);

  iRet = SumDigits(iValue);

  printf("Summation of digits  : %d\n",iRet);

  return 0;
}


// -5 -4 -3 -2 -1 0 1 2 3 4 5