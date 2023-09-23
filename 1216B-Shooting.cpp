//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int n,s=0;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        //pair<int,int> p(x,i+1);
        //v.push_back(p);
        v.push_back(make_pair(x,i+1));
    }
    sort(v.begin(),v.end());
    for(int i = n-1,j=0;i>-1;i--,j++){
        s+=(v[i].first*j)+1;
    }
    cout << s << endl;
    for(int i = n-1;i>-1;i--){
        cout << v[i].second << ' ';
    }
    cout << endl;
    return 0;
}