#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;


#define MAXN 100000
#define LOCAL


int main()
{
    int n;
    int l=0,r=0;
    int arr[MAXN];
    
#ifdef LOCAL
    freopen("in.txt","r",stdin);
#endif
    
    while(scanf("%d",&n)!=EOF){
        
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>0;i--){
            if(arr[i]<arr[i-1]){
                r=i;
                break;
            }
        }
    }
    
        reverse(arr+l,arr+r+1);
        int flag=0;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                flag=1;
                break;
            }
        }
    
        if(flag==0)
            cout<<"yes"<<endl<<l+1<<" "<<r+1;
        else cout<<"no";
        return 0;
        
}