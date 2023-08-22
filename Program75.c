#include<stdio.h>
#include<stdlib.h>

//Step 5: Perform the operation on array
void DisplayEvenOddSum(int Arr[], int iSize)
{
    int iCnt = 0, iEvenCnt=0, iOddCnt = 0;
    int iSumOdd = 0, iSumEven = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 0)
        {
            //iEvenCnt++;

            iSumEven = iSumEven + Arr[iCnt];
             
        }
        else 
        {
            //iOddCnt++;
            iSumOdd = iSumOdd + Arr[iCnt];
             
        }
    }
    printf("Addition of even elements are : %d\n",iSumEven);
    printf("Addition of odd elements are : %d\n",iSumOdd);
}            

int main()
{
    int *ptr = 0;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    //Step 2 : Allocate memory for array
    

   ptr = (int *)malloc(iLength * sizeof(int));

    //Step 3 : accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    //Step 4 : Call the function
    DisplayEvenOddSum(ptr, iLength);

   
    
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}