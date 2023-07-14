//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if(m == 1){
        cout << 1 << endl;
        return 0;
    }
    if(n >= m){
        for(int i = 1; i < m;i++)
            cout << i << " ";
        cout << m <<endl;
        return 0;
    }
    int a = (n*2)+1;
    int b = 1;
    for(int i = 1;i < m-1;i++){
        if(i%2 && a <= m){
            cout << a << " ";
            a++;
        }
        else{
            cout  <<b << " " ;
            b++;
        }
    }
    if(m%2 || a > m){
        cout << b << " " << ++b << endl;
    }else{
        cout << a << " " << b << endl;
    }
    return 0;
}