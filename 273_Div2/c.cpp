#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long r,g,b;
    cin>>r>>g>>b;
    long long ans = min((r+g+b)/3,r+g+b-max(r,max(g,b)));
    cout<<ans<<endl;
    return 0;
}