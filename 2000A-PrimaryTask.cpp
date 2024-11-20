//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string a;
        cin >> a;
        int check = 1;
        if(a[0]=='1'&&a[1]=='0' && a.size()>=3){
            if(a[2]=='0')
                check = 0;
            else if(a[2]=='1'&&a.size()==3)
                check = 0;
        }else
            check = 0;
        if(check){
            cout << "YES\n";
        }else
            cout << "NO\n";
    }
    return 0;
}
