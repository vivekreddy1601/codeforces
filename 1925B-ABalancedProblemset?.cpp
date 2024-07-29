//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int x,n,ans=1;
        cin >> x >> n;
        for(int i = 1;i*i<=x;i++){
            if(x%i==0){
                int left = x-(i*n);
                if(left >= 0 && left%i==0)
                    ans=max(ans,i);
                if(x/i!=i){
                    int ii = x/i;
                    int le = x - (ii*n);
                    if(le>=0&&le%ii==0)
                        ans = max(ans,ii);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
