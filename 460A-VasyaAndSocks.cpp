//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m,c=0,a=0;
    cin >> n>> m;
    while(n--){
        c++,a++;
        if(c==m){
            c = 0;
            n++;
        }
    }
    cout <<a <<'\n';
    return 0;
}
