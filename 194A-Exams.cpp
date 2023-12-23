//code by Vivek reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n,k,t;
    cin >> n >> k;
    if(k/n>=3)  
        cout << 0 << endl;
    else{
        t = k%n;
        cout << n-t << endl;
    }
    return 0;
}
