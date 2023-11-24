//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
         ll n,c=0;
         cin >> n;
         ll a[n];
         for(int i= 0; i < n;i++)
            cin >> a[i];
         for(int i= 1; i < n;i++){
             if(a[i]>=a[i-1]){
                 c = 1;
                 break;
             }
         }
         if(c==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
