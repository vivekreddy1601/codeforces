//code by Vivek Reddy
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i = 0; i <n ;i++)
            cin >> a[i];
        for(int i = 0; i < n;i++)
            cin >> b[i];
        vector<pair<int,int>> p(n);
        for(int i= 0; i < n;i++)
            p[i]={a[i],b[i]};
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<pair<int,int>> ans;
        bool fail = false;
        for(int i= 0; i < n;i++){
            for(int j = i; j < n;j++){
                if(p[j]==make_pair(a[i],b[i])){
                    swap(p[i],p[j]);
                    if(i!=j)
                        ans.emplace_back(i,j);
                    break;
                }
            }
            if(p[i]!=make_pair(a[i],b[i])) {
                fail = true;
                break;
            }
        }
        if(fail)
            cout << -1 << endl;
        else{
            cout << ans.size() << endl;
            for(auto [x,y] : ans)   
                cout << x+1 << " " <<y+1 <<  endl;
        }
    }
    return 0;
}
