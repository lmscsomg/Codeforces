#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int ans =0;
	for(int i=0;i<5;i++){
		int temp;
		cin>>temp;
		ans+=temp;
	}
	if(ans==0){
		cout<<-1;
		return 0;
	}
	if(ans%5==0)
		cout<<ans/5<<endl;
	else cout<<-1;

	return 0;

}