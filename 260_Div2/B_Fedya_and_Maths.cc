#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    size_t len=s.length();
    int ans;
    if(len>=2)
        ans=10*(s[len-2]-'0')+(s[len-1]-'0');
    else ans=s[len-1]-'0';
    if(ans%4==0)
        cout<<4;
    else cout<<0;
    return 0;
}