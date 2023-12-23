// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, module)
# include<stdio.h>
int main(){
	int num1,num2;
	char ch;
	float result;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	
	printf("\n select the one operators from +,-,*,/,% :");
	scanf("%c",&ch);
	result = 0;
	
	switch(ch)    
    {
        case '+':
        {
            result=num1+num2;
            break;
        }    
        case '-':
        {
            result=num1-num2;
            break;
        }
        case '*':
        {
            result=num1*num2;
            break;
        }    
        case '/':
        {
            result=(float)num1/(float)num2;
            break;
        }
             
        case '%':
        {
            result=num1%num2;
            break;
        }
    
   
default :
        {
            printf("Invalid operation.\n");
            break;
        }
    }    
 
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}
