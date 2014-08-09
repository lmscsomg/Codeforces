#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

//#define LOCAL
int main()
{
    #ifdef LOCAL
        freopen("in.txt","r",stdin);
    #endif
    
    int n,m;
    cin>>n>>m;
    if(min(n,m) &1)
        cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
}