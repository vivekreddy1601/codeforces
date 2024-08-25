//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,q;
        string s;
        cin >> n >> q >> s;
        while(q--){
            int x,y,c=0;
            cin >> x >> y;
            for(int i = 0;i < x-1;i++){
                if(s[i]==s[x-1]){
                    c=1; 
                    break;
                }
            }
            if(c==0){
                for(int i = y;i<n;i++){
                    if(s[i]==s[y-1]){
                        c=1; 
                        break;
                    }
                }
            }
            cout << (c==1 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
