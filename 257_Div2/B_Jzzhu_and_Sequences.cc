#include <iostream>
using namespace std;

#define MAX 1000000007

int f(int x)
{
    while(x<0)
        x+=MAX;
    return x;
}
int a[6];
int main()
{
    int x,y,n,ans=0;
    cin>>x>>y>>n;

    a[0]=x-y;
    a[1]=x;
    a[2]=y;
    a[3]=y-x;
    a[4]=-x;
    a[5]=-y;
    
    ans=a[n%6];
    if(ans<0)
        cout<<f(ans)%MAX;
    else cout<<ans%MAX;
    
    return 0;
}