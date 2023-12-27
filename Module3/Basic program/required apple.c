//Accept number of students from user. 
//I need to give 5 apples to each student. 
//How many apples are required?
# include<stdio.h>
int main(){
	int num,i=5 ,apple;
	printf("enter the no. of students:");
	scanf("%d",&num);
	apple = num*i;
	printf("required apple is : %d",apple);
	
}
