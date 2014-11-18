#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;

	if(m==1)
		cout<<n*(n-1)/2<<" "<<n*(n-1)/2<<endl;
	else{
		long long temp = n%m;
		if(temp ==0)
		{	long long i=m*(n/m)*(n/m-1)/2;
			long long j=(n-m+1)*(n-m)/2;
			cout<<min(i,j)<<" "<<max(i,j);
		}
		else{
			long long k = (n-n%m)/m;
			long long s = (m-temp)*(k*(k-1)/2)+temp*((k+1)*k/2);
			long long t = (n-m+1)*(n-m)/2;
			cout<<min(s,t)<<" "<<max(s,t);
		}
	}

	return 0;
}