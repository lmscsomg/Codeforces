#include <iostream>
using namespace std;

int main()
{
    int n,m,t;
    cin>>n>>m;
    
    t=m;
    while(t<=n){
        t+=m;
        n++;
    }
    
    cout<<n;
    return 0;
}