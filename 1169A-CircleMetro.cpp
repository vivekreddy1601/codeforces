//code by Vivek reddy
#include <iostream>
using namespace std;

int main()
{
    int n,a,x,b,y,c=0;
    cin >> n >> a >> x >> b >> y;
    while(a!=x && b!=y){
        if(a!=x){
            if(a==n)
                a = 1;
            else
                a++;
        }
        if(b!=y){
            if(b==1)
                b = n;
            else
                b--;
        }
        if(a == b){
            cout << "YES" << endl;
            c=1;
            break;
        }
    }
    if(c==0)
        cout << "NO" << endl;
    return 0;
}