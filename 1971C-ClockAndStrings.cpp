//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        int ct=0;
        for(int i=min(a,b); i<=max(a,b); ++i)
        {
            if(i==c || i==d) ct++;
        }
        if(ct & 1)  cout<<"YES\n";
        else cout<<"NO\n";
        }
    return 0;
}
