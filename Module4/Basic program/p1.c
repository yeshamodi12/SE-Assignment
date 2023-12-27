# include<stdio.h>
int main(){
	float sub1,sub2,sub3,sub4,sub5;
	float total,per;
	printf("\n enter your five subject marks: ");
	scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	printf("\n total of marks is : %f",total);
	per = (total/500)*100;
	printf("\n percentsage is :%.2f",per);
}
