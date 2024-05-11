//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    int x = a[0],ans = 0,cnt = 0;
    for(int i = 1;i < n+1;i++){
        if(a[i%n]<x){
            ans = n-i;
            cnt++;
        }
        x = a[i];
    }
    if(cnt > 1)
        cout << "-1\n";
    else
        cout << ans << '\n';
    return 0;
}
