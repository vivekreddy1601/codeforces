//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,x,y,c=1,k,j;
        cin >> n;
        vector<pair<int,int>> vp;
        for(int i = 0; i < n;i++){
            cin >> x >> y;
            vp.push_back(make_pair(y,x));
        }
        sort(vp.begin(),vp.end());
        vector<char> r;
        x=y=0;
        for(int i = 0;i<vp.size();i++){
            k = vp[i].first;
            j = vp[i].second;
            if(j < x){
                c = 0;
                break;
            }
            k = k-y;
            j = j-x;
            x = vp[i].second;
            y = vp[i].first;
            while(j > 0){
                j--;
                r.push_back('R');
            }
            while(k > 0){
                k--;
                r.push_back('U');
            }
        }
        if(c == 0){
            cout << "NO" << endl;
            continue;
        }  
        else
            cout << "YES" << endl;
        for(auto x : r){
            cout << x ;
        }
        cout << endl;
    }
    return 0;
}