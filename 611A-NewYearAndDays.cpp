//code by Vivek reddy
#include <iostream>
using namespace std;

int main()
{
    string a,b;
    int n;
    cin >> n >> a >> b;
    if(b[0]=='m'){
        if(n==31)        
            cout << 7 << endl;
        else if(n==30)
            cout << 11 << endl;
        else
            cout << 12 << endl;
    }else{
        if(n==6||n==5)
            cout << 53 << endl;
        else
            cout << 52 << endl;
    }
    return 0;
}