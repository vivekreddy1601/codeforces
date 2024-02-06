//code by Vivek reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ans=-1;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++)    
            cin >> a[i];
        for(int j = 0;j <=n;j++){
            int c = 0;
            for(int i = 0; i < n;i++){
                if(a[i]>j)
                    c++;
            }
            if(c==j){
                ans = c;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
