//code by Vivek Reddy
#include <iostream>
using namespace std;
int check(string a){
    if(a=="monday"){
        return 0;
    }
    if(a=="tuesday"){
        return 1;
    }
    if(a=="wednesday"){
        return 2;
    }
    if(a=="thursday"){
        return 3;
    }
    if(a=="friday"){
        return 4;
    }
    if(a=="saturday"){
        return 5;
    }
    if(a=="sunday"){
        return 6;
    }
}
int main()
{
    string a,b;
    cin >> a >> b;
    int x,y;
    x=check(a);
    y=check(b);
    if((28+x)%7==y||(30+x)%7==y||(31+x)%7==y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}