//code by Vivek Reddy
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,d,c=0;
    cin >> n >> d;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 1;i < n;i++){
        if(a[i-1]>=a[i]){
            int diff = a[i-1]-a[i]+1;
            int m = ceil(float(diff)/d);
            a[i]+=(d*m);
            c+=m;
        }
    }
    cout << c << '\n';
    return 0;
}
