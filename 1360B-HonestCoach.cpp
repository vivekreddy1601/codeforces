//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=INT_MAX;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        sort(a,a+n);
        for(int i = 0;i < n-1;i++){
            c = min(c,a[i+1]-a[i]);
        }
        cout << c << '\n';
    }
    return 0;
}
