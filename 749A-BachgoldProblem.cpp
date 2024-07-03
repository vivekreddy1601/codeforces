//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = n/2;
    cout << ans << '\n';
    for(int i= 0;i < ans-1;i++)
        cout << 2 << ' ';
    if(n%2==0){
        cout << 2 << endl;
    }else
        cout << 3 << endl;
    return 0;
}
