//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n],b[n+1]={0};
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        b[a[0]]=1;
        bool check = true;
        for(int i = 1;i < n;i++){
            if(a[i]==1){
                if(b[2]!=1){
                    check = false;
                    break;
                }
                b[a[i]]=1;
            }else if(a[i]==n){
                if(b[n-1]!=1){
                    check = false;
                    break;
                }
                b[a[i]]=1;
            }else{
                if(b[a[i]+1]!=1 && b[a[i]-1]!=1){
                    check = false;
                    break;
                }
                b[a[i]]=1;
            }
        }
        if(check == false)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
