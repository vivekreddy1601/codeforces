//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin >> n>> k;
    string s;
    cin >> s;
    s.push_back('#');
    set<char> c;
    for(int i = 0; i< k;i++){
        char x;
        cin >> x;
        c.insert(x);
    }
    int last = -1;
    ll total = 0;
    for(int i = 0; i<=n;i++){
        if(c.count(s[i])==0){
            int len = i-last-1;
            total += ((ll)(len)*(len+1LL))/2;
            last = i;
        }
    }
    cout << total << '\n';
    return 0;
}
