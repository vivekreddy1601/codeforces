//code by Vivek Reddy 
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n >> k;
        if(n%2==0){
            cout << n+(k*2) << endl;
        }else{
            bool check = false;
            for(int i = 2; i*i <= n;i++){
                if(n%i==0){
                    n+=i;
                    check = true;
                    break;
                }
            }
            if(!check)
                n+=n;
            cout << n+((k-1)*2) << endl;
        }
    }
    return 0;
}