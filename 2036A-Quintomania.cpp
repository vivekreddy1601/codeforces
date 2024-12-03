//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin >> a[i];
        for(int i = 1;i < n;i++){
            if(abs(a[i-1]-a[i])!=5&&abs(a[i-1]-a[i])!=7){
                c = 1;
                break;
            }
        }
        if(c)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
