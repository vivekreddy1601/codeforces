//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,t;
        cin >> n;
        ll a[n],c[n]={0};
        char ans[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        t = n;
        char ch = 'a';
        while(t > 0){
            ll s = 0;
            for(int i = 0; i < n;i++){
                if(a[i]==s && c[i]==0){
                    ans[i]=ch;
                    c[i]=1;
                    t--;
                    s++;
                }
            } 
            ch++;
        }
        string res = "";
        for(int i = 0; i < n;i++){
            res+=ans[i]; 
        }
        cout << res << '\n';
    }
    return 0;
}
