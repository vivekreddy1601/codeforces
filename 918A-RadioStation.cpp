//code by Vivek Reddy
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin >> n>> m;
    map<string,string> vp;
    while(n--){
        string a,b;
        cin >> a >> b;
        b+=";";
        vp[b]=a;
    }
    while(m--){
        string a,b;
        cin >> a >> b;
        cout << a << ' ' << b << " #" << vp[b] << endl;
    }
    return 0;
}
