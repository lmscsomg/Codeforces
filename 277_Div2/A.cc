#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    if(n & 1)
        cout<<(n+1)/2*(-1);
    else cout<<n/2;
    return 0;
}