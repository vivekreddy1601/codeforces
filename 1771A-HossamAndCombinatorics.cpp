//code by Vivek Reddy
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        long long n,ma=0,mi=INT_MAX,cma=0,cmi=0;
        cin >> n;
        long long a[n];
        for(int i=0;i< n;i++){
            cin >> a[i];
            if(a[i]>ma)
                ma = a[i];
            if(a[i]<mi)
                mi = a[i];
        }
        if(ma == mi)    {
            cout << n*(n-1) << '\n';
            continue;
        }
        for(int i= 0;i < n;i++){
            if(a[i]==mi)
                cmi++;
            if(a[i]==ma)
                cma++;
        }
        cout << 2*(cmi*cma) << '\n';
    }
    return 0;
}
