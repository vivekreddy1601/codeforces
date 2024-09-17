//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,ans=0,pos=0;
    cin >> n >> a >> b >> c;
    if(n==1)
        cout << 0 << '\n';
    else{
        n--;
        while(n--){
            if(pos==0){
                if(a < b){
                    pos = 1;
                    ans+=a;
                }
                else{
                    pos = 2;
                    ans+=b;
                }
            }else if(pos==1){
                if(a < c){
                    pos = 0;
                    ans+=a;
                }else{
                    pos = 2;
                    ans+=c;
                }
            }else{
                if(b < c){
                    pos = 0;
                    ans += b;
                }else{
                    pos = 1;
                    ans+=c;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
