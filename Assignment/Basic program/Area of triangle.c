//C Program to Find Area of Triangle Given Base And Height
//formula = (base*height)/2

#include<stdio.h>
int main(){
	float base, height,ans;
	printf("\n enter the value of base :");
	scanf("%f",&base);
	printf("\n enter the value of height :");
	scanf("%f",&height);
	ans = (base*height)/2;
	printf("\n Area of triangle is: %.2f",ans);
	
} 
