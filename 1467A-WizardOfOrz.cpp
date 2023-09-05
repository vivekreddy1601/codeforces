//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,a=0;
        cin >> n;
        for(int i = 0; i < n;i++){
            if(i < 3){
                cout << (i%2==0 ? 9:8);
            }else
                cout << (i-3)%10;
        }
        cout  << endl;
    }
    return 0;
}