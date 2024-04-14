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
        int x = n-1;
        for(int i = 0;i<n;i++){
            if(s[i]=='>'||s[n-1-i]=='<')
                x = min(x,i);
        }
        cout << x <<'\n';
    }
    return 0;
}
