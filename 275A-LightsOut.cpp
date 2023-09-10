//code by Vivek Reddy       
#include <iostream>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3;
    cout << ((a1+a2+b1)%2==0?1:0);
    cout << ((a1+a2+a3+b2)%2==0?1:0);
    cout << ((a2+a3+b3)%2==0?1:0) << endl;
    cout << ((a1+b1+b2+c1)%2==0?1:0);
    cout << ((a2+b2+c2+b1+b3)%2==0?1:0);
    cout << ((a3+b3+c3+b2)%2==0?1:0) << endl;
    cout << ((c1+c2+b1)%2==0?1:0);
    cout << ((c1+c2+c3+b2)%2==0?1:0);
    cout << ((c3+c2+b3)%2==0?1:0) << endl;
    return 0;
}