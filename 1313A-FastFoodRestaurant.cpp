//Code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a[3],ans=0;
        for(int i = 0; i < 3;i++){
            cin >> a[i];
            if(a[i]>0){
                ans++;
                a[i]--;
            }
        }
        sort(a,a+3);
        reverse(a,a+3);
        if(a[0]>0 && a[1]>0){
            a[0]--;
            a[1]--;
            ans++;
        }
        if(a[2]>0 && a[1]>0){
            a[2]--;
            a[1]--;
            ans++;
        }
        if(a[0]>0 && a[2]>0){
            a[0]--;
            a[2]--;
            ans++;
        }
        if(a[0]>0 && a[1]>0 && a[2]>0){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}