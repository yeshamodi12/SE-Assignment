//Convert Temperature Celsius into Fahrenheit 
//fahrenheit = (celsius * 9 / 5) + 32
# include<stdio.h>
int main(){
	float fa,cel;
	printf("\n enter your temprature in celsius:");
	scanf("%f",&cel);
	fa = (cel*9/5)+32;
	printf("fahrenheit temprature is : %.2f",fa);
} 

