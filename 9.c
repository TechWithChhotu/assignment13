// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int digit_count(int );
int main()
{
	int N,count;
	printf("Enter a number: ");
	scanf("%d",&N);
	count=digit_count(N);
	printf("total number of digit = %d",count);
return 0;
}
int digit_count(int n){
	static int count=0;
	if(n==0)
	return count;
	n/=10;
	count++;
	digit_count(n);
}

