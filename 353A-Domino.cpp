//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    int as=0,bs=0;
    for(int i = 0; i < n;i++){
        cin >> a[i];
        as+=a[i];
        cin >> b[i];
        bs+=b[i];
    }
    int c=0;
    if(as%2==0&&bs%2==0)
        cout << 0 << endl;
    else if((as%2==1&&bs%2==0)||(as%2==0&&bs%2==1))
        cout << -1 << endl;
    else{
        for(int i = 0; i < n;i++){
            if((a[i]%2==1&&b[i]%2==0)||(a[i]%2==0&&b[i]%2==1)){
                cout << 1 << endl;
                break;
            }
            c++;
        }
        if(c==n)
            cout << -1 << endl;
    }
    return 0;
}
