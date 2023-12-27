//find the area of a rectangular prism formula : A=2 * ((l * h) + (w * h) + (l * w))

# include<stdio.h>
int main(){
	int a,l,w,h;
	printf("enter the height:");
	scanf("%d",&h);
	printf("\nenter the width:");
	scanf("%d",&w);
	printf("\nenter the length:");
	scanf("%d",&l);
	a = 2*((l*h)+(w * h) + (l * w));
	printf("area of rectengular prisum is:%d",a);
}
