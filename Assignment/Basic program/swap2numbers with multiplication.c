//WAP to calculate swap 2 numbers with using of multiplication and division. 
// a = a*b; b= a/b; a= a/b;
//a=b
//b=c
//c=a
//a=b
//b=a

#include<stdio.h>
int main(){
	int a,b;
	printf("enter the two values:\n");
	scanf("%d %d",&a, &b);
	printf("enterd two values a=%d b=%d:\n",a,b);
	a = a * b;
	b = b / a;
	a = a / b;
	printf("after swaping values are a=%d and b=%d\n",a,b);
}
