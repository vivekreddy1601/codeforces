//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        int n = s.size();
        int ans=n;
        for(int i = 0; i < n;i++){
            for(int j = i+1;j<n;j++){
                int t = (s[i]-'0')*10 + (s[j]-'0');
                if(t%25==0)
                    ans = min(ans,(j-i-1)+(n-1-j));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
