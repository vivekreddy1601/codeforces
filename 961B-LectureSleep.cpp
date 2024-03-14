//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,k,sum=0;
    cin >> n >> k;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i].first;
    for(int i = 0; i< n;i++)
        cin >> v[i].second;
    for(int i = 0; i < n;i++){
        if(v[i].second==1)
            sum+=v[i].first;
    }
    ll maxo =0,temp = 0;
    for(int i = 0; i < k;i++){
        if(v[i].second == 0)
            temp += v[i].first;
    }
    maxo = temp;
    for(int i = k;i < n;i++){
        if(v[i].second == 0)
            temp+=v[i].first;
        if(v[i-k].second == 0)
            temp-=v[i-k].first;
        maxo = max(maxo,temp);
    }
    cout << maxo+sum << '\n';
    return 0;
}
