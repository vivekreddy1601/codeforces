//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,j,p=2,m,af,a,ma,array[101],g;
    vector<ll>cv;
    set<ll>sc;
    cin>>n>>g;
    ll count[101];
    memset(count,0,sizeof(count));
    for(i=0;i<n;i++)
    {
        cin>>a;
        sc.insert(a);
        count[a]++;
    }
    sort(count,count+101);
    m=count[100];
    ma=m/g;
    if(m%g!=0)
        ma++;
    af=sc.size();
    ll flag;
    flag=af*g*ma;
    cout<<flag-n<<endl;
    return 0;
}
