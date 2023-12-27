//Gross Salary Program in C Programs 
//Gross Salary = Basic Pay + DA + HR
#include<stdio.h>
int main(){
	int basicpay,DA,Hr,gross;
	printf("\n enter the value of basicpay :");
	scanf("%d",&basicpay);
	printf("\n enter the value of DA :");
	scanf("%f",&DA);
	printf("\n enter the value of Hr :");
	scanf("%f",&Hr);
//	intrest = p*r*t/100;
	gross= basicpay+DA+Hr;
	printf("\n gross salary is: %d",gross);
	
} 
