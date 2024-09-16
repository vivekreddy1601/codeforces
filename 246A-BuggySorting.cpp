//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<3){
        cout << -1 << '\n';
    }else{
        for(int i = 2;i <= n;i++)
            cout << i << ' ';
        cout << 1 << '\n';
    }
    return 0;
}
