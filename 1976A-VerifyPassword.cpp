//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int num,c=0,ans=0;
        cin >> num;
        string s,w="",n="";
        cin >> s;
        for(int i = 0;i < num;i++){
            if(s[i]<='9' && s[i]>='0' && c==0){
                n+=s[i];
            }else if(s[i]<='z'&& s[i]>='a'){
                w+=s[i];
                c = 1;
            }else{
                ans = 1;
            }
        }
        if(ans == 0){
            sort(w.begin(),w.end());
            sort(n.begin(),n.end());
            //cout << s << ' ' << n << ' ' << w << endl;
            int i = 0;
            for(int j = 0;j < n.size() && i < num;j++,i++){
                if(s[i]!=n[j]){
                    ans = 1;
                    break;
                }
            }
            if(ans!=1){
            for(int j = 0;j < w.size() && i < num;j++,i++){
                if(s[i]!=w[j]){
                    ans = 1;
                    break;
                }
            }
            }
        }
        if(ans)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
