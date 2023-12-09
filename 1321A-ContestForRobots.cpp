//code by Vivek Reddy
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,at=0,bt=0;
    cin >> n;
    int a[n],b[n];
    for(int i= 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        cin >> b[i];
        if(a[i]==1&&b[i]==0)
            at++;
        else if(a[i]==0&&b[i]==1)
            bt++;
    }
    if((at==bt && (at==0||at==n))||at==0)
        cout << -1 << endl;
    else{
        cout << ceil(float(bt+1)/at) << endl;
    }
    return 0;
}
