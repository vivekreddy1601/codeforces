//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a = n*m;
    int b = (m>n)?a/m:a/n;
    if(b%2==0){
        cout << "Malvika" << endl;
    }else
        cout << "Akshat" << endl;
    return 0;
}
