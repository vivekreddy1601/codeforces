#include <iostream>
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ans=0;
        cin >> n;
        string s,m(n,'1');
        cin >> s;
        for(int i = 0;i < n;i++){
            if(s[i]=='0'){
                for(int j = i+1;j <= n;j+=i+1){
                    if(s[j-1]=='1')
                        break;
                    if(m[j-1]=='0')
                        continue;
                    m[j-1]='0';
                    ans+=i+1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
