//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0,b=0;
        for(int i = 0; i < n;i++){
            if(s[i]=='>')
                a++;
            else if(s[i]=='<')
                b++;
        }
        if(a==0 || b==0)
            cout << n << '\n';
        else{
            int g = 0,t = 0;
            for(int i = 0; i < n;i++){
                if(s[i]=='-')
                    t++;
                else{
                    if(t)
                        g += t+1;
                    t = 0;
                }
            }
            if(t)
                g+=t+1;
            if(s[0]=='-'&&s[n-1]=='-')
                g--;
            cout << g << '\n';
        }
    }
    return 0;
}
