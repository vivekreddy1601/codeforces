//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,k=0,l=0,ans=0;
    cin >> n;
    int a[n],b[n];
    fill(b,b+n,1);
    for(int i = 0; i < n;i++)
        cin >> a[i];
    for(int i = 1; i< n;i++){
        if(a[i]==a[i-1])
            b[k]++;
        else
            k++;
    }
    for(int i = 1;i <= k;i++){
        l = 2* min(b[i],b[i-1]);
        ans = max(ans,l);
    }
    cout << ans << endl;
    return 0;
}
