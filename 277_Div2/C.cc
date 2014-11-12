#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	long long n,p;
	string str;
	cin >> n >> p;
	cin>>str;
	
	long long mid = n>>1;
	long long ud=0;
	long long lptr=-1,rptr=-1;
	long long ans_1=0,ans_2 =0;
	int flag = 0;

	if(p<=mid){
		for(int i=0;i<mid;i++){
			if(str[i]!=str[n-i-1]){
				ud += min((str[i]-str[n-1-i]+26)%26, (str[n-1-i]-str[i]+26)%26);
				rptr = i+1;
				if(flag == 0){
					flag = 1;
					lptr = i+1;
				}
			}
		}
	}
	else{
		for(int i=mid;i<n;i++){
			if(str[i]!=str[n-i-1]){
				ud += min((str[i]-str[n-1-i]+26)%26, (str[n-1-i]-str[i]+26)%26);
				rptr = i+1;
				if(flag == 0){
					flag = 1;
					lptr = i+1;
				}
			}

		}
	}
	//cout<<lptr<<" "<<rptr<<endl;
	if(flag == 0){
		cout<<0;
		return 0;
	}

	if(rptr == lptr){
		ans_1 = abs(p-lptr)+ud;
		cout<<ans_1;
	}
	else{
		if(lptr <=p && p<=rptr){
			ans_1 = (rptr-lptr)+(p-lptr)+ud;
			ans_2 = (rptr-lptr)+(rptr-p)+ud;
			cout<<min(ans_1,ans_2)<<endl;
		}
		else if(p<lptr){
			ans_1 = ans_2 = (lptr-p)+(rptr-lptr)+ud;
			cout<<ans_1;
		}
		else{
			ans_1 = ans_2 = (p-rptr)+(rptr-lptr)+ud;
			cout<<ans_1;
		}
	}

	return 0;

}