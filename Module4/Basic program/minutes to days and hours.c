//Convert minutes into seconds and hours.
//minutes in to seconds = minutes*60;
//minutes in to hours = minute/60;
#include<stdio.h>
int main(){
	int minute,seconds,hours;
	printf("enter the number of minutes:");
	scanf ("%d",&minute);
	seconds = minute*60;
	printf("no. of second is : %d",seconds);
	hours = minute/60;
	printf("\nno. of hours are : %d",hours);
}
