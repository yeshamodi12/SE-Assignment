//Write a C program to accept two integers
// and check whether they are equal or not

# include<stdio.h>
int main(){
	int num1,num2;
	printf("enter your first number :");
	scanf("%d",&num1);
	printf("enter your second number :");
	scanf("%d",&num2);
	if(num1==num2){
		printf("both are same");
	}
	else{
		printf("both are different");
	}
}
