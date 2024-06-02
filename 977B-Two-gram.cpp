//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,ma=0;
    cin >> n;
    string s,ans="";
    cin >> s;
    for(int j = 0;j < n-1;j++){
        int t = 0;
        for(int i = 0; i < n-1;i++){
            if(s[i]==s[j]&&s[i+1]==s[j+1]){
                t++;
            }
        }
        if(t>ma){
            ma = t;
            ans = "";
            ans += s[j];
            ans += s[j+1];
        }
    }
    cout << ans << '\n';
    return 0;
}
