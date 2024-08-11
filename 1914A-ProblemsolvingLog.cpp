//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    map<int, int> mp1;
    for (int i = 0; i < n; i++)
    {
        mp1[s[i] - 'A']++;
    }
    for (auto i : mp1)
    {
        if (i.second > i.first)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    }
    return 0;
}
