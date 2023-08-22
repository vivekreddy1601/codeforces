//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
void check(){
    string a,s;
    cin >> a >> s;
    ll i1 = a.size()-1;
    ll i2 = s.size()-1;
    string ans="";
    if(a==s){
        cout << 0 << endl;
        return;
    }else if(stoll(s)<stoll(a)){
        cout << -1 << endl;
        return;
    }
    while(i1>=0){
        if(a[i1]>s[i2]){
            if(s[i2-1]=='1'){
                char ch = (char)(10+((s[i2]-'0')-(a[i1]-'0'))+'0');
                ans=ch+ans;
                i2-=2;
                i1--;
            }else{
                cout << -1 << endl;
                return;
            }
        }else{
            char ch= (char)(((s[i2]-'0')-(a[i1]-'0'))+'0');
            ans = ch+ans;
            i1--;
            i2--;
        }
        if(i2<0&&i1>=0){
            cout << -1 << endl;
            return;
        }
    }
    for(int i = i2;i >=0;i--){
        ans=s[i]+ans;
    }
    i1=0;
    for(i1=0;i1<ans.size();i1++)
        if(ans[i1]!='0')
            break;
    for(int i=i1;i < ans.size();i++)
        cout << ans[i];
    cout << endl;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        check();
    }
    return 0;
}