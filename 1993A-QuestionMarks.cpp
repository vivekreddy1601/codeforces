//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,a=0,b=0,c=0,d=0,e=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0;i < s.size();i++){
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='C')
                c++;
            else if(s[i]=='D')
                d++;
            else
                e++;
        }
        int ans = min(a,n)+min(b,n)+min(c,n)+min(d,n);
        cout << ans << '\n';
    }
    return 0;
}
