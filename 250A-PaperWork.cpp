//code by Vivek Reddy
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long k,n=0;
    cin >> k;
    long long a[k];
    for(int i =0;i < k;i++){
        cin >> a[i];
        if(a[i] < 0){
            n++;
        }
    }
    if(n==0)
        cout << 1 << endl;
    else{    
        long long f = ceil(double(n)/2);
        cout << f << endl;
    }
    long long c=0,x=0;
    for(int i = 0; i < k;i++){
        x++;
        if(a[i]<0)
            c++;
        if(c>2){
            cout << --x << " ";
            x = 0;
            c = 0;
            i--;
        }
    }
    cout << x << endl;
    return 0;
}