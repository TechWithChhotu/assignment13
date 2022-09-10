//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int ,int );
int main()
{
	int a,b,c;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	c=HCF(a,b);
	printf("HCF = %d",c);
	
return 0;
}
int HCF(int x,int y){
	int temp=y%x;
	y=x;
	x=temp;
	if(temp==0)
	return y;
	HCF(x,y);
}
