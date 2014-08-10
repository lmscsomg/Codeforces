#include <iostream>
#include <algorithm>
using namespace std;

long maxn;
long a[100004],ans[100004];
int main()
{
    long n;
    cin>>n;
    
    for(long i=0;i<n;i++){
        long x;
        cin>>x;
        a[x]+=x;
        maxn=max(x,maxn);
    }
    
    ans[1]=a[1];
    
    for(long i=2;i<=maxn;i++){
        ans[i]=max(ans[i-1],ans[i-2]+a[i]);
    }
    
    cout<<ans[maxn];
    return 0;
}