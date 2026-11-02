/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayTable
//  Input         : Integer
//  Output        : Void
//  Description   : Accept a number from user and display its table
//  Date          : 31/10/2026
//  Author        : Ranaranjit mahesh patil
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return EXIT_SUCCESS;
}