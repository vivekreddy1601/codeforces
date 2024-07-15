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
        if(n%2==1){
            for(ll i = 0;i < n;i++)
                cout << "7 ";
            cout << "\n";
        }else{
            cout << "3 1 ";
            for(int i = 0;i < n-2;i++)
                cout << "2 ";
            cout << "\n";
        }
    }
    return 0;
}
