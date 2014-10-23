#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    
    if(1.0*b/m < a){
        int t=(n%m)*a < b ? (n%m)*a : b;
        cout<<(n/m)*b+t;
    }
    else
        cout<<n*a;
    return 0;
}