#include <iostream>
using namespace std;

int main()
{
    long long a,c;
    cin>>a>>c;
    
    if((c-a)<=1)
        cout<<-1;
    else{
        if(a & 1){
            if((c-a)==2)
                cout<<-1;
            else cout<<a+1<<" "<<a+2<<" "<<a+3;
        }
        else  cout<<a<<" "<<a+1<<" "<<a+2;
    }
    return 0;
}