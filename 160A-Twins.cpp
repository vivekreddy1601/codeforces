//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,s=0,s2=0,x=0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
        s+=a[i];
    }
    s/=2;
    sort(a,a+n);
    for(int i = n-1; i >= 0;i--){
        if(s2>s)
            break;
        else{
            s2+=a[i];
            x++;
        }
    }
    cout << x << '\n';
    return 0;
}
