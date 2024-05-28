//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    char c;
    string s,ans="";
    cin >> c>>s;
    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i = 0;i < s.size();i++){
        for(int j= 0;j < a.size();j++){
            if(s[i]==a[j]){
                if(c=='R')
                    ans+=a[j-1];
                else
                    ans+=a[j+1];
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
