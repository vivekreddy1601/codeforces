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
        int l = 0, r = s.size()-1;
        while(l < r && (s[l]!=s[r])){
            l++;
            r--;
        }
        cout << r-l+1 << '\n';
    }
    return 0;
}
