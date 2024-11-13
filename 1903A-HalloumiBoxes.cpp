//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,c=0;
        cin >> n >> k;
        int a[n],b[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a,a+n);
        for(int i = 0;i < n;i++){
            if(b[i]!=a[i]){
                c = 1;
                break;
            }
        }
        if(k<2 && c==1){
            cout << "NO\n";
        }else
            cout << "YES\n";
    }
    return 0;
}
