//code by Vivek Reddy
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll n,temp,s;
    vector<ll> a,b;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    bool possible=0;
    if(a[0]==1)
    {
        if(a[s-1])
            possible=1;
        else if(b[s-1])
        {
            for(ll i=s;i<n;i++)
            {
                if(a[i] && b[i])
                {
                    possible=1;
                    break;
                }
            }
        }
    }
    if(possible)
        cout<<"YES\n";
    else
        cout<<"NO\n";
   // show
    return 0;
}
