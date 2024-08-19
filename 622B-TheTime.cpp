//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int h,m,n,hr=0,mi=0;
    char c;
    cin >>h >> c >> m >> n;
    mi = m+n;
    hr = mi/60;
    mi%=60;
    hr+=h;
    hr%=24;
    if(hr < 10 && mi < 10)
        cout << 0 << hr << c << 0 << mi << '\n';
    else if(hr < 10 && mi > 9)
        cout << 0 << hr << c << mi << '\n';
    else if(hr > 9 && mi < 10)
        cout << hr << c << 0 << mi << '\n';
    else 
        cout << hr << c << mi << '\n';
    return 0;
}
