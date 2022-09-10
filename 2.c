// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int naturalN(int );
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    naturalN(n);
    return 0;
}
int  naturalN(int N) {
    static int sum,i=1;
    if(N) {
        	 sum+=i;
        	 i+=2;
        	 N--;
       	    naturalN(N);
    }
    else {
        printf("sum = %d",sum);
        return 0;
    }

}


