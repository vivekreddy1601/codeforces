//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n;i++)
        cin >> a[i];
    int ans = 1;
    for(int i = 1;i <= n;i++){
        int node = a[i];
        int dep = 1;
        while(node!=-1){
            node = a[node];
            dep++;
        }
        ans = max(ans,dep);
    }
    cout << ans << '\n';
    return 0;
}
