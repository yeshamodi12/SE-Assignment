//Find the Greatest Among Three Numbers 
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter your numbers A,B and C:");
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b &&a>=c){
		printf("a is largest no.%d",a);
	}
	else if (b>=a &&b>=c){
		printf("b is largest no.%d",b);
	}
	else {
		printf("c is largest no.%d",c);
	}
}
