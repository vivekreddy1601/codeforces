//code by Vivek reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i = 1;i <= 1024;i++){
            vector<int> b;
            for(int j = 0;j < n;j++){
                b.push_back(i^a[j]);
            }
            sort(b.begin(),b.end());
            if(a==b){
                c=1;
                cout << i << '\n';
                break;
            }
        }
        if(c==0)
            cout << -1 << '\n';
    }
    return 0;
}
