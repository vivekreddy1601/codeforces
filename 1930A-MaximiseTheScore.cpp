//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,s=0;
        cin >> n;
        n*=2;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = n-2;i >= 0;i-=2){
            s+=a[i];
        }
        cout << s << '\n';
    }
    return 0;
}
