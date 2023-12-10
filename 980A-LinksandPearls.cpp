//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = 0, p = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i]=='-')
            l++;
        else
            p++;
    }
    if(p==0)
        cout << "YES" << endl;
    else if(l%p==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
