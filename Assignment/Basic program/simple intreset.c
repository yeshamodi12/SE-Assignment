//Calculate a Simple Interest 
//Simple Interest = (P * R * T) / 100
#include<stdio.h>
int main(){
	float p, r,t,intrest;
	printf("\n enter the value of p :");
	scanf("%f",&p);
	printf("\n enter the value of r :");
	scanf("%f",&r);
	printf("\n enter the value of t :");
	scanf("%f",&t);
	intrest = p*r*t/100;
	printf("\n simple intrest is: %.2f",intrest);
	
} 
