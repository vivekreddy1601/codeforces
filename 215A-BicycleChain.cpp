//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int> v;
    for(int i =0;i < m;i++){
        cin >> t;
        for(int j = 0;j <n;j++){
            if(t%a[j]==0)
                v.push_back(t/a[j]);
        }
    }
    int ma =0;
    for(auto i : v){
        if(i > ma)
            ma =i;
    }
    cout << count(v.begin(),v.end(),ma) << '\n';
    return 0;
}
