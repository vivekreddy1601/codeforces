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
        int c = -1;
        for(int i = 1;i < s.size();i++){
            if(s[i]!=s[i-1]){
                c = i;
                break;
            }
        }
        if(c==-1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            char t = s[c];
            s[c]=s[c-1];
            s[c-1]=t;
            cout << s << '\n';
        }
    }
    return 0;
}
