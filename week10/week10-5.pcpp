// week10-5.cpp 1021-04-09 list all primes
#include <stdio.h>
int isPrime(int n)
{
	//only 1 and n  can divide it
	//2... n-1 all can't divid it
	for(int i=2;i<n;i++){
		if(n%i==0) return 0; //failed
	}
	return 1; 
}
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(isPrime(i))	printf("%d ",i);
	}
}
