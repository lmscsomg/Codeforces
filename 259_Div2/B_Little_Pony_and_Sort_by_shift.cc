#include <iostream>
using namespace std;

int a[100004];
int main()
{
    long n;
    cin>>n;
    long ans=0;
    for(long i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<a[i-1]){
            if(ans){
                cout<<-1;
                return 0;
            }
        ans=n-i;
        }
    }
    
    if(ans && a[0]<a[n-1])
        cout<<-1;
    else cout<<ans;
    return 0;
}