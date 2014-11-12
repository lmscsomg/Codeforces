#include <iostream>
using namespace std;

int main()
{
	long long a,m;
	cin>>a>>m;

	for(int i=0;i<m;i++){
		if(a%m==0){
			cout<<"Yes"<<endl;
			return 0;
		}
		a+=a%m;
	}
	cout<<"No"<<endl;
	return 0;
}