////////////////////////////////////////////////////////////
//
//  Function Name :  void Display pattern 
//  Input         :  IRow = 4  iCol=4
//  Output        :  A   B   C   D
//                   A   B   C   D
//                   A   B   C   D
//                   A   B   C   D
//  Description   : Accept rows and coloumns and display pattern
//  Date          : 16/11/2026
//  Author        : Ranaranjit mahesh patil
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", 'A' + j - 1);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
