//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,ans=0;
    string s;
    cin >> n >> s;
    for(int i = 0;i < n;i++){
        if(s[i]=='1')
            ans++;
        else    
            break;
    }
    ans = min(ans+1,n);
    cout << ans << '\n';
    return 0;
}
