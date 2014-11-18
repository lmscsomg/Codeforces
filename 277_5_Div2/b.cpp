#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
   // freopen("in.txt","r",stdin);
    int n,m;
    
    while(cin>>n){
        int a[100],b[100];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cin>>m;
        for(int i=0;i<m;i++)
            cin>>b[i];
        
        sort(a,a+n);
        sort(b,b+m);
        
        int i=0,j=0;
        int ans=0;
        while(i<n && j<m){
            if(abs(a[i]-b[j])<=1){
                ans++;
                i++;
                j++;
            }
            else{
                if(a[i]>=2+b[j]){
                    j++;
                }
                else if(b[j]>=2+a[i]){
                    i++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
