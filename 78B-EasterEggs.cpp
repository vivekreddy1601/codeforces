//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,i=0;
    cin >> n;
    char c[7]={'V','I','B','G','Y','O','R'};
    cout << "YOR" ;
    n-=3;
    while(n>0){
        cout << c[i++];
        if(i>3)
            i = 0;
        n--;
    }
    return 0;
}
