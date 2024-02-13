//code by Vivek reddy
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,maxi=0;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int> mp;
        for(int i = 0;i< n;i++){
            mp[s[i]]++;
            maxi=max(maxi,mp[s[i]]);
        }
        if(maxi>(n/2)){
            cout<< n-((n-maxi)*2) << '\n';
        }else
            cout << n%2 << endl;
    }
    return 0;
}
