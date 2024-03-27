//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;
int m[10005],cnt=0;
string reshape(string text,int i, int pos){
    for(;i > pos;i--){
        m[cnt++]=i;
        char tmp = text[i];
        text[i]=text[i-1];
        text[i-1]=tmp;
    }
    return text;
}
int main()
{
    int n;
    string s,t;
    cin >> n >> s >> t;
    string ts = s, tt = t;
    sort(ts.begin(),ts.end());
    sort(tt.begin(),tt.end());
    if(ts!=tt){
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    for(int pos = 0;pos < n;pos++){
        for(int i = pos; i < n;i++){
            if(t[pos]==s[i]){
                ans += i-pos;
                s = reshape(s,i,pos);
                break;
            }
        }
    }
    if(ans == 0){
        cout << 0 << '\n';
        return 0;
    }
    if(cnt >10000){
        cout << -1 << '\n';
        return 0;
    }
    cout << ans << '\n';
    for(int i = 0; i < cnt;i++)
        cout << m[i] << ' ';
    cout << '\n';
    return 0;
}
