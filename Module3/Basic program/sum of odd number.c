#include<stdio.h>
int main()
{
    int i,number,sum=0;
    printf("please enter the maximum limit value :\n");
    scanf("%d",&number);

    printf("odd numbers between 0 and %d\t are :\n", number);
    for(i=1; i<=number ; i++)
    {
        if( i%2 != 0 )
        {
            printf("%d\t",i);
            sum = sum + i;
        }
    }
    printf("\nthe sum of all even numbers upto %d = %d\n",number,sum);

}
