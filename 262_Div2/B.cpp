#include <iostream>
#include <cmath>
using namespace std;

long long pow1(int n,int a){
	long long ans=1;
	for(int i=0;i<a;i++){
		ans*=n;
	}
	return ans;
}
int comp(long long n){
	int ans=0;
	while(n!=0){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int main()
{
	int a,b,c;
	int j=0;
	long long arr[1000];
	long long x;
	cin>>a>>b>>c;


	for(int i=1;i<=81;i++){
		x=b*pow1(i,a)+c;
		if(comp(x)==i)
			arr[j++]=x;
	}

	cout<<j<<endl;
	
	for(int i=0;i<j;i++)
		cout<<arr[i]<<" ";
	return 0;
}