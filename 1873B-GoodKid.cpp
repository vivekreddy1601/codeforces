//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,p=1;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        a[0]++;
        for(int i = 0;i < n;i++){
            p*=a[i];
        }
        cout << p << '\n';
    }
    return 0;
}
