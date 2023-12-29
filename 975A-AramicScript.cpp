//code by Vivek Reddy
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n;i++)
        cin >> a[i];
    set<string> s;
    for(int i = 0; i < n;i++){
        sort(a[i].begin(),a[i].end());
        a[i].resize(unique(a[i].begin(),a[i].end())-a[i].begin());
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    return 0;
}
