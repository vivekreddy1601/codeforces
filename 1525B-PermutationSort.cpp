//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,x=0;
        cin >> n;
        int a[n],b[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i = 0;i < n;i++){
            if(a[i]!=b[i])
                x++;
        }
        if(x < 2)
            cout << x << endl;
        else{
            if(a[0]!=b[0]&&a[n-1]!=b[n-1]){
                if(a[0]==b[n-1]&&a[n-1]==b[0])
                    cout << 3 << endl;
                else
                    cout << 2 << endl;
            }else
                cout << 1 << endl;
        }
    }
    return 0;
}
