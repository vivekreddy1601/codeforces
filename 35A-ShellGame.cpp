//code by Vivek Reddy
#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    int x,vt=3;
    cin >> x;
    while(vt--){
        int a,b;
        cin >> a >> b;
        if(a==x){
            x=b;
        }else if(b == x){
            x = a;
        }
    }
    cout << x << endl;
    return 0;
}
