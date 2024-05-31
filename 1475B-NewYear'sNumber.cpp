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
        bool ans = false;
        for(int i = 0;i <= 1000;i++){
            ll o = n-(2020*i);
            if(o<0)
                break;
            if(o%2021==0){
                ans = true;
                break;
            }
        }
        if(ans) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
