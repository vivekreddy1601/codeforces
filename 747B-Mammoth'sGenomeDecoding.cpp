//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,g=0,c=0,t=0;
    if(n%4!=0){
        cout << "===\n";
        return 0;
    }
    for(int i = 0; i < n;i++){
        if(s[i]=='A')
            a++;
        else if(s[i]=='G')
            g++;
        else if(s[i]=='C')
            c++;
        else if(s[i]=='T')
            t++;
    }
    n/=4;
    if(a <= n && g <= n && c <= n && t <= n){
        a = n-a;
        g = n-g;
        c = n-c;
        t = n-t;
        for(int i = 0; i < s.size();i++){
            if(s[i]=='?'){
                if(a){
                    cout << 'A';
                    a--;
                }else if(g){
                    cout << 'G';
                    g--;
                }else if(c){
                    cout << 'C';
                    c--;
                }else if(t){
                    cout << 'T';
                    t--;
                }
            }else 
                cout << s[i];
        }
    }else
        cout << "===\n";
    return 0;
}
