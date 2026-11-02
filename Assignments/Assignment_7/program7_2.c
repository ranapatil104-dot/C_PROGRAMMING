///////////////////////////////////////////////////////
//
//      Function name :Display 
//      Input         :Integer
//      Output        :Void
//      Description   :Display numbers from 1 to N
//      Date          :31/10/2026
//      Author        :Ranaranjit mahesh patil
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}