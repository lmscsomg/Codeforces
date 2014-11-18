#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

typedef long long ll;
int main()
{
	int n;
	cin>>n;

	ll a[3000];
	vector<pair<int,int> > ans;

	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		int k =i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[k])
				k=j;
		}

		if(k!=i){
			swap(a[i],a[k]);
			ans.push_back(make_pair(i,k));
		}
	}
	cout<<ans.size()<<endl;

	for(int i=0;i<ans.size();i++)
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
}