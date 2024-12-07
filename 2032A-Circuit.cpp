//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int t=1, tcase=0;
    cin >> t;
    while(++tcase, t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 0; i < 2 * n; ++i) {
            int ai;
            cin >> ai;
            if(ai == 1) ++cnt;
        }
        cout << (cnt % 2) << ' ' << (cnt > n? n - (cnt - n) : cnt) << endl;
        
    }
    return 0;
}
