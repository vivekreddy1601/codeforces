//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        if(s[0]==s[s.size()-1])
            cout << "-1\n";
        else
            cout << s << '\n';
    }
    return 0;
}
