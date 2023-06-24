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
        char c = '$';
        int found = 0;
        for(int i = 0; i < s.size();i++){
            if(c!='$'&&s[i]=='?'){
                s[i]=c;
            }else if(s[i]!='?'){
                found++;
                c = s[i];
            }
        }
        for(int i = s.size()-1;i>=0;i--){
            if(c!='$'&&s[i]=='?'){
                s[i]=c;
            }else if(s[i]!='?'){
                found++;
                c = s[i];
            }
        }
        if(found==0){
            for(int i = 0; i < s.size();i++)
                cout << '0';
            cout << endl;
        }else
            cout << s << endl;
    }
    return 0;
}