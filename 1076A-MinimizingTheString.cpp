//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,c=0;
    cin >> n;
    string s,t="";
    cin >> s;
    for(int i = 0; i < n-1;i++){
        int x = s[i];
        int y = s[i+1];
        if(x <= y || c==1)
            t+=char(x);
        else
            c = 1;    
    }
    if(c==1)
        t+=s[n-1];
    cout << t << '\n';
    return 0;
}
