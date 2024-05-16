//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 26;
    ans += (n)*25;
    cout << ans << '\n';
    return 0;
}
