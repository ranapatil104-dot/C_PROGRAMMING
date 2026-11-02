/////////////////////////////////////////////////////
//
//      Function name : pattern
//      Input         : Integer
//      Output        :void
//      Description   : Accept a number from user and display the pattern using $ and *
//      Date          :31/10/2026
//      Author        :Ranaranjit mahesh patil
//
/////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void pattern(int iNo)
{
    int iCnt = 0;

    if(iCnt < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<= iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    pattern(iValue);
    return EXIT_SUCCESS;
}