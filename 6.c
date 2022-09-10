// Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int );
int main()
{
	int n,fact;
	printf("Enter a number to calculate factorial: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial = %d",fact);

return 0;
}
int factorial(int N){
	static int fact=1;
	if(N){
		fact*=N;
		N--;
		factorial(N);	
	}
	else
	return fact;
	
}
