//code by Vivek Reddy   
#include <iostream>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b>> c >> d;
    double x = max((3*a)/10,a-((a/250)*c));
    double y = max((3*b)/10,b-((b/250)*d));
    // cout << x << y << endl;
    if(x > y)   
        cout << "Misha" << endl;
    else if(x == y)
        cout << "Tie" << endl;
    else
        cout << "Vasya" << endl;
    return 0;
}