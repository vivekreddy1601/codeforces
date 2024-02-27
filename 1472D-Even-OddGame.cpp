//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n; 
        cin >> n;
        ll a[n];
        for(int i = 0;i < n;i++)
            cin >> a[i];
        vector<int> even,odd;
        for(int i= 0; i < n;i++){
            if(a[i]%2==0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        int i = 0,j = 0,c=0;
        ll e=0,o=0;
        while(i < even.size() && j < odd.size()){
            if(c==0){
                if(even[i]>=odd[j]){
                    e+=even[i];
                    i++;
                    c = 1;
                }else{
                    j++;
                    c = 1;
                }
            }else if(i < even.size() && j < odd.size()){
                if(odd[j]>=even[i]){
                    o+=odd[j];
                    j++;
                    c = 0;
                }else{
                    i++;
                    c = 0;
                }
            }
        }
        while(i < even.size()){
            if(c==0){
                e+=even[i];
                i++;
                c =1;
            }
            else{
                i++;
                c = 0;
            }
        }
        while(j < odd.size()){
            if(c==0){
                j++;
                c = 1;
            }else{
                o+=odd[j];
                j++;
                c = 0;
            }
        }
        cout << (e>=o ? (e==o ? "Tie" : "Alice"):"Bob") << '\n';
    }
    return 0;
}
