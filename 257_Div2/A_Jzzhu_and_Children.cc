#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int max=0;
    int ans=0;
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        temp=(temp-1)/m+1;
        if(temp>=max){
            ans=i+1;
            max=temp;
        }
    }
    cout<<ans;
    return 0;
}