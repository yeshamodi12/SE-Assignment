#include <stdio.h>
int main()
{
    int ar1[3][3];
    int ar2[3][3];
    int multiplication[3][3];
    printf("ar1 ---> \n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multiplication[i][j] = 0;
            for (int k = 0; k < 2; k++)
                multiplication[i][j] += ar1[i][k] * ar2[k][j];
        }
    }
    printf("\n");
    printf("multiplication=add = \n");
