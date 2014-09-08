#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a,int b){
    return a>b;
}
int a[25];
int main()
{
    int n,k,coin;
    long long ans=0;
    char ch;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>ch;
        a[ch-'A']++;
    }
    
    sort(a,a+n,comp);
    
    int i=0;
    while(k>0 && i>=0 && i<26){
        coin=min(k,a[i]);
        ans+=coin*coin;
        k-=coin;
        i++;
    }
    
    cout<<ans;
    return 0;
}