//code by Vivek Reddy
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,a,b,ans=INT_MAX;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> a >> b;
            ans= min(ans,(a+((b-1)/2)));
        }
        cout << ans << '\n';
    }
    return 0;
}
