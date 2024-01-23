//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0,ans=0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        for(int i = 0; i< n;i++){
            while(a[i]%2==0){
                c++;
                a[i]/=2;
            }
        }
        vector<int> v;
        for(int i = 1; i<n+1;i++){
            int x = i, temp = 0;
            while(x%2==0){
                x/=2;
                temp++;
            }
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<int>());
        if(c>=n)
            cout << 0 << endl;
        else{
            for(int i = 0;i < v.size();i++){
                if(c+v[i]>=n){
                    c=n;
                    ans++;
                    break;
                }
                c+=v[i];
                ans++;
            }
            if(c<n)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }
    return 0;
}
