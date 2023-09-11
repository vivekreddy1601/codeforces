//code by Vivek Reddy
#include <iostream>
using namespace std;
void solve(int n){
    for(int i = 0; i <= 150;i++){
            int l = n-(7*i);
            for(int j = 0; j <= 250;j++){
                l-=j*5;
                if(l>=0 && l%3==0){
                    cout << l/3 << ' ' << j << ' ' << i << endl;
                    return;
                }
            }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}