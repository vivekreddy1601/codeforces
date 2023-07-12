//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s=0;
        cin >> n;
        cout << 2 << endl;
        cout << n << ' ' << n-1 << endl;
        s=((n+(n-1)+1)/2);
        for(int i = n-2;i > 0;i--){
            cout << s << ' ' << i << endl;
            s = (s+i+1)/2;
        }
    }
    return 0;
}

/* Other way
//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
 
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s=0;
        cin >> n;
        cout << 2 << endl;
        cout << n << ' ' << n-1 << endl;
        s=ceil((double(n)+double(n-1))/2);
        for(int i = n-2;i > 0;i--){
            cout << s << ' ' << i << endl;
            s = ceil(double(s+i)/2);
        }
    }
    
*/