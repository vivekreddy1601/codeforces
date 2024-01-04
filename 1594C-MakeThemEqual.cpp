//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        int in = -1;
        bool check = true;
        for(int i = 0; i < n;i++){
            if(s[i]==c)
                in = i;
            if(s[i]!=c)
                check = false;
        }
        if(check)
            cout << 0 << endl;
        else if(in == -1)
            cout << 2 << endl << n-1 << ' ' << n << endl;
        else if(in == n-1)
            cout << 1 << endl << in+1 << endl;
        else if(in >= n/2)
            cout << 1 << endl << in+1 << endl;
        else 
            cout << 2 << endl << n-1 << ' ' << n << endl;
    }
    return 0;
}
