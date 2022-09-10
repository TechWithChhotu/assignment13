// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int SumOfDigit(int );
int main()
{
    int n;
    printf("Enter a number to find sum of digits: \n\t\t\t");
    scanf("%d",&n);
    SumOfDigit(n);
    return 0;
}
int  SumOfDigit(int N) {
    static int sum;
    if(N) {
        sum+=(N%10);
        N/=10;
        SumOfDigit(N);
    }
    else {
        printf("sum = %d",sum);
        return 0;
    }

}
