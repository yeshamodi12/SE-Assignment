//sum of even numbers
// logic sum= sum+i
#include<stdio.h>
int main(){
	int i,number,sum=0;
	printf("enter the maximum number of limit:\n");
	scanf("%d",&number);
	printf("even numbers between 0 and %d\t are :\n", number);
	for(i=1;i<=number;i++){
		if(i%2!=0){
			printf("%d\t\n",i);
			sum = sum+i;
		}
		printf("the sum of all even numbers upto %d = %d\n",number,sum);
	}
}

