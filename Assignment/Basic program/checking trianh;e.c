#include <stdio.h> 

int main()  
{  
    int a, b, c, sum; 

    printf("Input three values of triangle : ");    
    scanf("%d %d %d", &a, &b, &c);  

        sum = a + b + c;   

    /* Check whether sum=180 then its a valid triangle otherwise not */  
    if(sum == 180)   
    {  
        printf("The triangle is valid.\n");  
    }  
    else  
    {  
        printf("The triangle is not valid.\n");  
    }  
 }
