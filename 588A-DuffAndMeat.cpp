//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 101,s = 0;
    while(n--){
        int x,y;
        cin >> x >> y;
        if(y < m)
            m = y;
        s += (m*x);
    }
    cout << s << endl;
    return 0;
}
