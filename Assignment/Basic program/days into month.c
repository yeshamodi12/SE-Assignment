//Convert days into months
//Month=days/30
# include<stdio.h>
int main(){
	int days;
	float month;
	printf("enter the number of days:");
	scanf("%d",&days);
	month =(days/30);
	printf(" month is:%.2f",month);
}
