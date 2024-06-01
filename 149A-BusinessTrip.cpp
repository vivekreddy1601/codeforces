//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int a[12];
    for(int i = 0; i < 12;i++)   
        cin >> a[i];
    sort(a,a+12);
    if(k==0)
        cout << 0 << endl;
    else{
        int ans = 0;
        for(int i = 11;i >=0;i--){
            ans++;
            k-=a[i];
            if(k <= 0)
                break;
        }
        if(k <= 0)
            cout << ans << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}
