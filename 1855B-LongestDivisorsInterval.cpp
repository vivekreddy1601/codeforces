//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        long long num;
        cin >> num;
        int c = 0;
        for(long long i = 1;i <= num;i++){
            if(num%i!=0) break;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
