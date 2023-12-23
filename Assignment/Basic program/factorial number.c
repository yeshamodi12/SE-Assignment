//WAP to print factorial of given number
//factorial is ex 3 = (3*2*1) 6= (6*5*4*3*2*1)
# include <stdio.h>
int main(){
	int i,num,fact=1;
	printf("enter the number to find the factorial:");
	scanf("%d",&num);
//	for first your start point; define ypur end ,opertaor(--,++)
	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("factorial of number is: %d",fact);
}
