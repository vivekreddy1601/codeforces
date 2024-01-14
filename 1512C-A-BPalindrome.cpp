//code by Vivek Reddy
#include <iostream>
using namespace std;
void vivek(){
    int a,b,c=0;
    cin >> a >> b;
    string s;
    cin >> s;
    for(int i=0;i < s.size();i++){
        if(s[i]=='0')
            a--;
        else if(s[i]=='1')
            b--;
        else
            c++;
    }
    int n = s.size();
    if(c==0){
        for(int i = 0; i < n/2;i++){
            if(s[i]!=s[n-i-1]){
                cout << -1 << endl;
                return;
            }
        }
        if(a>0||b>0){
            cout << -1 << endl;
            return;
        }
        cout << s << endl;
        return;
    }
    for(int i = 0; i < n/2;i++){
        if(s[i]=='?' && s[n-1-i]!='?'){
            if(s[n-1-i]=='0' && a > 0){
                s[i]='0';
                a--;
            }else if(s[n-1-i]=='0' && a==0){
                cout << -1 << endl;
                return;
            }else if(s[n-1-i]=='1' && b > 0){
                s[i] = '1';
                b--;
            }else{
                cout << -1 << endl;
                return;
            }
        }
        else if(s[i]!='?' && s[n-1-i]=='?'){
            if(s[i]=='0' && a > 0){
                s[n-1-i]='0';
                a--;
            }else if(s[i]=='0' && a==0){
                cout << -1 << endl;
                return;
            }else if(s[i]=='1' && b > 0){
                s[n-1-i] = '1';
                b--;
            }else{
                cout << -1 << endl;
                return;
            }
        }
    }
    for(int i = 0; i < n/2;i++){
        if(s[i]=='?' && s[n-i-1]=='?'){
            if(a>=2) s[i]='0',s[n-i-1]='0',a-=2;
            else if(b>=2) s[i]='1',s[n-i-1]='1',b-=2;
            else{
                cout << -1 << endl;
                return;
            }
        }
    }
    if(n%2==1 && s[n/2]=='?'){
        if(a>0) s[n/2]='0',a--;
        else if(b>0) s[n/2]='1',b--;
        else{
            cout << -1 << endl;
            return;
        }
    }
    if(a>0 || b>0){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n/2;i++){
        if(s[i]!=s[n-1-i]){
            cout << -1 << endl;
            return;
        }
    }
    cout << s << endl;
    return;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--)
        vivek();
    return 0;
}
