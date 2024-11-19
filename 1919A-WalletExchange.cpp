//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b;
        cin >> a >> b;
        int s = a+b;
        if(s&1)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}
