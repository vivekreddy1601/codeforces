//code by Vivek Reddy
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        if(n > 45)
            cout << -1 << '\n';
        else{
            int c = 9,ans=0,t=0;
            while(n > 0){
                if(n > c){
                    n-=c;
                    ans = (c*pow(10,t))+ans;
                    t++;
                    c--;
                }
                else{
                    ans = (n*pow(10,t))+ans;
                    n = 0;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
