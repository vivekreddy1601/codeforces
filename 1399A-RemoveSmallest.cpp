//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,msum=0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        if(n==1){
            cout << "YES\n";
            continue;
        }
        sort(a,a+n);
        for(int i = 1;i < n;i++){
            if(a[i]-a[i-1]>msum)
                msum = a[i]-a[i-1];
        }
        if(msum>1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
