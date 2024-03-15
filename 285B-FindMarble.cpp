//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,s,t;
    cin >> n >> s >> t;
    int a[n+1];
    for(int i = 1; i <= n;i++)
        cin >> a[i];
    int c = 0, p = s;
    while(1){
        if(p == t)
            break;
        c++;
        p = a[p];
        if(c > n){
            c =-1;
            break;
        }
    }
    cout << c << endl;
    return 0;
}
