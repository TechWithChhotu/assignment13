//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int ,int );
int main()
{
	int base,expo,result;
	printf("Enter base number: ");
	scanf("%d",&base);
	printf("Enter exponent number: ");
	scanf("%d",&expo);
	result=power(base,expo);
	printf("%d power of %d = %d",expo,base,result);
return 0;
}
int power(int Base,int exponent){
	static int result=1;
	if(exponent==0)
	return result;
	result*=Base;
	exponent--;
	power(Base,exponent);
}

