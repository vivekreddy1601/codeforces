//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        long long a,b;
        cin >> a>> b;
        if(a==1&&b==1)
            cout << 0 << endl;
        else if(a==1 || b ==1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}