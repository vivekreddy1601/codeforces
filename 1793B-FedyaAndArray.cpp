//code by Vivek Reddy       
#include <iostream>
#define ll long long    
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        cout << 2*(a-b) << endl;
        for(int i = b;i < a;i++)
            cout << i << ' ';
        for(int i = a;i > b;i--)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}