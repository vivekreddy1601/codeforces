//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    long long r,g,b,s=0;
    cin >> r>> g >> b;
    r=(r+1)/2;
    g=(g+1)/2;
    b=(b+1)/2;
    if(r>g && r > b){
        g=r-1;
        b=r-1;
    }else if(g>r && g > b){
        r=g;
        b=g-1;
    }else if(b > r && b > g){
        r = b;
        g = b;
    }else if(r==g && r!=b){
        b = r-1;
    }else if(g == b){
        r = g;
    }else if(b == r){
        g = r;
    }
    cout << 30+r+g+b-1 << endl;
    return 0;
}