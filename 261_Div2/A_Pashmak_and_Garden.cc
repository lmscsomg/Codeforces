#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    if(x1!=x2 && y1!=y2){
        if(abs(x1-x2)!=abs(y1-y2))
            cout<<"-1";
        else cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
    else{
        if(x1==x2){
            int x3=x1+y1-y2;
            cout<<x3<<" "<<y1<<" "<<x3<<" "<<y2;
        }
        if(y1==y2){
            int y3=y1+x1-x2;
            cout<<x1<<" "<<y3<<" "<<x2<<" "<<y3;
        }
    }
    return 0;
}