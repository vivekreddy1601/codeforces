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
        int f = -1,l = -1;
        for(int i = 0;i < n;i++){
            if(s[i]=='B' && f == -1){
                f = i;
            }else if(s[i]=='B')
                l = i;
        }
        if(l!=-1&&f!=-1)
            cout << l-f+1 << '\n';
        else if(f!=-1)
            cout << 1 << '\n';
        else     
            cout << 0 << '\n';
    }
    return 0;
}
