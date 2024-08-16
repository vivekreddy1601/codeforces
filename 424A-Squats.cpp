//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll count = 0;
    for (auto &ch : s) {
        if (ch == 'X')
            count++;
    }

    if (count == n / 2)
    {
        cout << 0 << '\n';
        cout << s << '\n';
        return;
    }

    if (count < (n / 2)) {
        count = (n / 2) - count;
        cout << count << '\n';

        for (int i = 0; i < n and count > 0; i++)
        {
            if (s[i] == 'x') {
                s[i] = 'X';
                count--;
            }
        }
        cout << s << '\n';
    }
    else {
        count = count - (n / 2);
        cout << count << '\n';

        for (int i = 0; i < n and count > 0; i++) {
            if (s[i] == 'X') {
                s[i] = 'x';
                count--;
            }
        }
        cout << s << '\n';
    }
}
int main()
{
    solve();
    return 0;
}
