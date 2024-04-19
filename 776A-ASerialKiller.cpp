//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    cout << a << ' ' << b << '\n';
    int n;
    cin >> n;
    while(n--){
        string x,y;
        cin >> x >> y;
        if(x == a){
            a = y;
        }else if(x == b)
            b = y;
        else if(y == a)
            a = x;
        else
            b = x;
        cout << a << ' ' << b << '\n';
    }
    return 0;
}
