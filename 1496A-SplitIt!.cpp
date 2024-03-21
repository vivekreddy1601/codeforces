//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k;
        cin >>n >> k;
        string s;
        cin >> s;
        if(2*k>=n){
            cout << "NO" << endl;
            continue;
        }
        for(int i = 0; i < k;i++){
            if(s[i]==s[n-i-1])  continue;
            else{
                cout << "NO" << endl;
                n = -1;
                break;
            }                
        }
        if(n!=-1)
            cout << "YES" << endl;
    }
    return 0;
}
