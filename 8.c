//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibonacci(int );
int main()
{
	int n;
	printf("Enter Nth term: ");
	scanf("%d",&n);
	fibonacci(n);
return 0;
}
int fibonacci(int N){
	static int a,b=1,temp;
	if(N==0)
	return 0;
	temp=a;				
	a=b;			
	b+=temp;		
	printf(" %d",temp);	
	N--;
	fibonacci(N);
}

