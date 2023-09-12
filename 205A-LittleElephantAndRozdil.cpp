//code by Vivek Redddy
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> vp;
    for(int i = 0; i < n;i++){
        int t;
        cin >> t;
        vp.push_back(make_pair(t,i+1));
    }
    sort(vp.begin(),vp.end());
    if(vp[0].first==vp[1].first)
        cout << "Still Rozdil" << endl;
    else
        cout << vp[0].second << endl;
    return 0;
}