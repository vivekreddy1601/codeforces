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
        if(s[0]==s[s.size()-1])
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
