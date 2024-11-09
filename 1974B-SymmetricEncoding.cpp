//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        string s,r="",ss="";
        cin >> s;
        unordered_map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second>0){
                r+=i.first;
            }
        }
        sort(r.begin(),r.end());
        for(int i = 0,j;i < n;i++){
            for(j = 0;j < r.size();j++){
                if(s[i]==r[j]){
                    break;
                }
            }
            ss+=r[r.size()-1-j];
        }
        cout << ss <<'\n';
    }
    return 0;
}
