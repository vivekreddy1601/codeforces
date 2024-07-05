//code by Vivek Reddy
#include <iostream>
using namespace std;
bool prime(int n){
    if(n<=1)
        return false;
    for(int i = 2;i <= n/2;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,m,c=0;
    cin >> n >> m;
    while(n<m-1){
        n++;
        if(prime(n)){
            c = 1;
            break;
        }
    }
    if(c==1)
        cout << "NO" << endl;
    else{
        if(prime(m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
