//Accept monthly salary from the user and 
//deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.
//ins= salary*10/100
//loan = salary*10/100
//final sal = salary-ins-loan;

#include<stdio.h>
int main(){
	float salary,ins,loan,finalsalary;
	printf("enter your salary:");
	scanf("%f",&salary);
	ins = salary*0.10;
	printf("\n ins is :%f",ins);
	loan = salary*0.10;
	printf("\n loan is :%f",loan);
	finalsalary = salary-(ins+loan);
	printf("\nfinal salary is:%f",finalsalary);
	
}  

