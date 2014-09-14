#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    
    int ans=1;
    for(int i=0;i<n;i++){
        if(a[i]=='0' || ans==n)
            break;
        else ans++;
    }
    cout<<ans;
    return 0;
}