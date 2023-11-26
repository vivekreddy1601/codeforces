//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,k,m,f=0,s=0;
    cin >> n>> m >> k;
    while(n--){
        int t;
        cin >> t;
        if(t == 1)
            f++;
        else
            s++;
    }
    m-=f;
    if(s > m && m > 0){
        s-=m;
        m = 0;
    }
    k-=s;
    if(m > 0 && k > 0)
        cout << 0 << endl;
    else if(m <0 && k < 0)
        cout << abs(m+k) << endl;
    else
        cout << abs(min(m,k)) << endl;
    return 0;
}
