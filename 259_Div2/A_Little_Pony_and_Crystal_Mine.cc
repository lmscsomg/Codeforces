#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int num_1=abs(i-(n-1)/2);
        for(int j=0;j<num_1;j++)
            cout<<"*";
        for(int j=0;j<n-2*num_1;j++)
            cout<<"D";
        for(int j=0;j<num_1;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}