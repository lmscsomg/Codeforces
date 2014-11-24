#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

bool judge(long long n){
	n=abs(n);
	while(n!=0){
		int k = n%10;
		n/=10;
		if(k==8){
			return true;
		}
	}
	return false;
}

int main()
{
	long long a;
	cin>>a;

	for(int i=1;i<=20;i++){
		if(judge(a+i)){
			cout<<i<<endl;
			return 0;
		}
	}

}