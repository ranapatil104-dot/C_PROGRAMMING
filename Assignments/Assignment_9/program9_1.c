/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPattern
//  Input         : Integer
//  Output        : Void
//  Description   : Accept a number and display * and # pattern
//  Date          : 31/10/2026
//  Author        : Ranaranjit mahesh patil
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayPattern(iValue);

    return EXIT_SUCCESS;
}