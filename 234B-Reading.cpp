//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long 
using namespace std;

int main()
{
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    ll n,k,t;
    cin >> n >> k;
    vector<pair<int,int>> v;
    for(int i = 0; i < n;++i){
        cin >> t;
        v.push_back(pair<int,int>(t,i+1));
    }
    sort(v.rbegin(),v.rend());
    cout << v[k-1].first << endl;
    vector<int> s;
    for(int i = 0; i < k;++i){
        s.push_back(v[i].second);
    }
    sort(s.begin(),s.end());
    for(int i = 0; i < k;i++){
        cout << s[i] << " ";
    }
    return 0;
}
