#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    long long max=0,min=1e10,num_max=0,num_min=0;
    
    cin>>n;
    vector<long long> array;
    for(long long i=0;i<n;i++){
        int b;
        cin>>b;
        array.push_back(b);
        max=max>b?max:b;
        min=min<b?min:b;
    }
    
    for(auto str=array.begin();str!=array.end();str++){
        if(*str==max)
            num_max++;
        if(*str==min)
            num_min++;
    }
    
    cout<<max-min<<" ";
    if(max==min)
        cout<<num_max*(num_max-1)/2;
    else cout<<num_max*num_min;
    
    return 0;
    
}