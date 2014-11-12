#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--){
		long long l,r;
		cin>>l>>r;

		long long result=l;
		long long ans=l;

		for(int i=0;i<60;++i){
			result|=(1LL<<i);
			if(result<=r)
				ans=result;
		}
		cout<<ans<<endl;
	}
	return 0;
}