//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        if(s=="abc"||s=="acb"||s=="cba"||s=="bac")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
