//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],b[n-1],s=0,m=1000;
    cin >> a[0];
    for(int i = 1; i < n;i++){
        cin >> a[i];
        b[i] = a[i]-a[i-1];
        s = max(s,b[i]);
    }
    for(int i= 2;i < n;i++){
        m = max(min(m,b[i]+b[i-1]),s);
    }
    cout << m << endl;
    return 0;
}
