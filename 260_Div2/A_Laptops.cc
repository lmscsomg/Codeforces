#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int,int> PI;
int main()
{
    int n;
    cin>>n;
    vector<PI> A(n);
    
    for(int i=0;i<n;i++){
        cin>>A[i].first>>A[i].second;
    }
    sort(A.begin(),A.end());
    
    bool res=false;
    
    for(int i=0;i<n-1;i++){
        if(A[i].second>A[i+1].second){
            res=true;
            break;
        }
    }
    
    if(res)
        cout<<"Happy Alex";
    else cout<<"Poor Alex";
    
    return 0;
    
}
