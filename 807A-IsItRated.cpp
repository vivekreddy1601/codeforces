//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt,m=5000;
    bool e = true;
    cin >> vt;
    int a[vt],b;
    for(int i = 0;i < vt;i++){
        cin >> a[i] >> b;
        if(a[i]!=b)
            e = false;
    }
    if(e == false)
        cout << "rated" << endl;
    else{
    for(int i = 0; i < vt-1;i++){
        for(int j = i+1;j  < vt;j++){
            if(a[i]<a[j])
                e = false;
        }
    }
    if(e == false)
        cout << "unrated" << endl;
    else
        cout << "maybe" << endl;
    }
    return 0;
}
