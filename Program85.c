
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Step 5: Perform the operation on array
int CheckLastOccurance(int Arr[], int iSize,int iNo)
{
    int iCnt = 0, iIndex = 0;

    for(iCnt = iSize -1 ; iCnt >=0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == -1)
    {
        return -1;
    }
    else 
    {
        return iCnt;
    }
    
}
    
int main()
{
    int *ptr = 0;
    int iLength = 0, i = 0,iValue = 0, iRet = 0;

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

    printf("Enter the elements to findout the  of last occurence :\n");
    scanf("%d",&iValue);

    //Step 4 : Call the function


    iRet= CheckLastOccurance(ptr, iLength,iValue);
    if(iRet == -1)
    {
        printf("there is no %d in the array \n",iValue);
        
    }
    else
    {
        printf("%d is occured in the array at last index %d\n",iValue,iRet);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}



    