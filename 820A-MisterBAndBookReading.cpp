//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int c,vo,v1,a,l;
    cin>>c>>vo>>v1>>a>>l;
    int cnt=1,r=0,h=0;
    h = r = vo;
    while(h < c)
    {
        r = min(v1,r + a);
        h += r - l;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
