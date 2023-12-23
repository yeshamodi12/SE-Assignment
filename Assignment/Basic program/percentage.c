// C Program to Find Percentage of 5 Subjects 
//percentage = (total / 500) * 100
# include<stdio.h>
int main(){
	float sub1,sub2,sub3,sub4,sub5,total,per;
	printf("\n enter sub1 marks: ");
	scanf("%f",&sub1);
	printf("\n enter sub2 marks: ");
	scanf("%f",&sub2);
	printf("\n enter sub3 marks: ");
	scanf("%f",&sub3);
	printf("\n enter sub4 marks: ");
	scanf("%f",&sub4);
	printf("\n enter sub5 marks: ");
	scanf("%f",&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	printf("\n total of marks is :%.2f",total);
	per = (total / 500) * 100;
	printf("\n percentage is: %.2f",per);
	
}
