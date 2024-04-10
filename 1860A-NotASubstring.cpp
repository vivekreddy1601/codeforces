//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s,ans="";
        cin >> s;
        if(s=="()"){
            cout << "NO" << '\n';
            continue;
        }
        bool check = false;
        for(int i = 0; i < s.size();i++){
            if((s[i]=='(' && s[i+1]=='(')||(s[i]==')' && s[i+1]==')'))
                check = true;
        }
        if(check){
            for(int i = 0; i < s.size();i++){
                ans+="()";
            }
        }else{
            for(int i = 0; i < s.size();i++)
                ans+='(';
            for(int i = 0; i < s.size();i++)
                ans+=')';
        }
        cout << "YES" << '\n';
        cout << ans << '\n';
    }
    return 0;
}
