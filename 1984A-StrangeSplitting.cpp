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
        int a[n];
        for(int i = 0;i < n;i++)
            cin >> a[i];
        if(a[0]==a[n-1])
            cout << "NO\n";
        else{
            cout << "YES\n";
            string s="";
            if(a[1]==a[n-1]){
                s = "RB";
            }else{
                s = "BR";
            }
            for(int i = 0;i < n-2;i++)
                    s+='R';
            cout << s << "\n";
        }
    }
    return 0;
}
