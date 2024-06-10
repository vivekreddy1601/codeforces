//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ans=0;
        cin >> n;
        vector<int> a,even,odd;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            if(x%2)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        for(auto i : even)  a.push_back(i);
        for(auto i : odd)   a.push_back(i);
        for(int i = 0; i < n;i++){
            for(int j = i+1;j < n;j++){
                if(__gcd(a[i],2*a[j])>1)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
