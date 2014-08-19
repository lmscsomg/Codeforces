#include <iostream>
#include <cmath>
using namespace std;

int ans[1004][1004];
int temp[1004];

int main()
{
    int n,d,k;
    
    cin>>n>>k>>d;
    if(pow(k,d)<n){
        cout<<-1;
    }
    else{
        for(int i=1;i<n;i++){
            int c=0;
            for(int j=d-1;j>=0;j--){
                c=(temp[j]+1)/k;
                temp[j]=(temp[j]+1)%k;
                if(c==0)
                    break;
            }
        
            for(int j=0;j<d;j++)
                ans[j][i]=temp[j];
        }
    
        for(int i=0;i<d;i++){
            for(int j=0;j<n;j++)
                cout<<ans[i][j]+1<<" ";
            cout<<endl;
        }
    }
    
    return 0;
}