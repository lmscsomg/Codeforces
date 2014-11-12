#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const long long  INF = 1e9+1;

int main()
{
	int n;
	cin>>n;

	long long x_min = INF, x_max = -INF, y_min = INF , y_max = -INF;
	while(n--){
		long long x,y;
		cin>>x>>y;

		x_min = min(x_min,x);
		x_max = max(x_max,x);
		y_min = min(y_min,y);
		y_max = max(y_max,y);

	}

	long long edge = max(x_max-x_min,y_max-y_min);
	cout<<edge*edge*1LL;
	return 0;
}