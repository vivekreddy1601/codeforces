//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a ;
    cin >> b ;
    int ah = ((a[0]-'0')*10)+(a[1]-'0');
    int am = ((a[3]-'0')*10)+(a[4]-'0');
    int bm = ((b[3]-'0')*10)+(b[4]-'0');
    int bh = ((b[0]-'0')*10)+(b[1]-'0');
    int th = ah-bh;
    int tm = am-bm;
    if(tm < 0){
        tm = 60+tm;
        th--;
    }
    if(th < 0){
        th=24+th;
    }
    if(th < 10){
        cout << 0<< th <<':';
    }else   
        cout << th << ':';
    if(tm < 10)
        cout <<0 << tm <<endl;
    else
        cout << tm << endl;
    return 0;
}
