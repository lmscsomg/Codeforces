#include <iostream>
using namespace std;

int direction[4][2]={
    {0,1},{0,-1},{1,0},{-1,0}
};

int main()
{
    int n;
    char a[102][102];
    cin>>n;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int count=0;
            for(int k=0;k<4;++k){
                int ii=i+direction[k][0];
                int jj=j+direction[k][1];
                if(ii>=0 && ii<n &&
                   jj>=0 && jj<n && a[ii][jj]=='o')
                    count++;
            }
            if(count % 2){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}