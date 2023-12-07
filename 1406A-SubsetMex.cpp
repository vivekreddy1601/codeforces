//code by Vivek Reddy
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        unordered_map<int,int> count; 
        for(int i = 0; i < n;i++){
            int a;
            cin >> a;
            count[a]++;
        }
        int m1 = 0,m2 = 0;
        bool fm2 = false;
        while(true){
            if(count[m1]==0)
                break;
            if(count[m1]>=2 && fm2 == false)
                m2++;
            if(count[m1]==1)
                fm2=true;
            m1++;
        }
        cout << m1+m2 << endl;
    }
    return 0;
}
