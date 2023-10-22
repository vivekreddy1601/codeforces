//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if(m==0)
        cout << 1 << endl;
    else if(m == n)
        cout << 0 << endl;
    else{
        if(n/m>=2)
            cout << m << endl;
        else
            cout << n-m << endl;
    }
    return 0;
}