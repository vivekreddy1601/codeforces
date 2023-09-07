//code by Vivek Reddy   
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        if(n%2==0){
            for(int i = 0; i < (n/2);i++)
                cout << '1';
            cout << endl;
        }else{
            cout << '7';
            n-=3;
            for(int i = 0; i < (n/2);i++)
                cout << '1';
            cout << endl;
        }
    }
    return 0;
}
