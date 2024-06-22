//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b,c;
        cin >> a >> b>> c;
        if(a+b == c)
            cout << "+\n";
        else 
            cout << "-\n";
    }
    return 0;
}
