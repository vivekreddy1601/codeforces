//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,o=0,e=0;
    cin >> n;
    int a;
    for(int i= 0;i <n;i++){
        cin >>  a;
        if(a%2!=0)
            o++;
        else
            e++;
    }
    cout << (o%2==1?o:e) << endl;
    return 0;
}