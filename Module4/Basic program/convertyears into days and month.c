//Convert years into days and months
//years in to days = years*365;
//years in to month = years *12;
# include<stdio.h>
int main(){
	int years,days,month;
	printf("enter the number of years:");
	scanf("%d",&years);
	days = years *365;
	printf("number of days are :%d",days);
	month = years*12;
	printf("\n number of months are :%d",month);
}


