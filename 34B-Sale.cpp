//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,s=0;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        if(x < 0)
            v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < m && i < v.size();i++)
        s+=v[i];
    cout << abs(s) << '\n';
    return 0;
}
