//code by Vivek Reddy
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k,t=0;
        cin >> n >> k;
        while(n > 0){
            if(n%k==0){
                n/=k;
                t++;
            }else{
                t+=(n%k);
                n-=(n%k);
            }
        }
        cout << t << endl;
    }
    return 0;
}
