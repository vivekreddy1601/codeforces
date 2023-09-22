//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt,m=5000;
    bool e = true;
    cin >> vt;
    int a,b;
    while(vt--){
        cin >> a >> b;
        if(a!=b)
            e = false;
        if(b < m)
            m = b;
    }
    if(e == false)
        cout << "rated" << endl;
    else if(m == b)
        cout << "maybe" << endl;
    else
        cout << "unrated" << endl;
    return 0;
}