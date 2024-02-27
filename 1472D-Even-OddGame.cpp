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
        vector<ll> a(n);
        for(int i = 0;i < n;i++)
            cin >> a[i];
        sort(a.rbegin(),a.rend());
        ll e = 0,o = 0, c = 0;
        for(int i= 0; i < n;i++,c++){
            if(c%2==0){
                if(a[i]%2==0){
                    e+=a[i];
                }
            }else{
                if(a[i]%2==1)
                    o+=a[i];
            }
        }
        cout << (e>=o ? (e==o ? "Tie" : "Alice"):"Bob") << '\n';
        
            
        
        /*
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
        */
    }
    return 0;
}
