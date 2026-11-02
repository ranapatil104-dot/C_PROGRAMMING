/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Input         : Integer
//  Output        : Double
//  Description   : Accept area in square feet and convert it into
//                  square meter
//  Date          : 1/11/2026
//  Author        : Ranaranjit mahesh patil
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf", dRet);

    return EXIT_SUCCESS;
}