//find odd number
int main(){
	int i,number;
	printf("enter the max number of limitation:")
	scanf("%d",&number);
	printf("odd numbers 0 to %d\n",number);
	for (i=0;i<=number;i++)
	{
		if(i%2!=0){
			printf("%d\t",i)
		}
		
	}
}
