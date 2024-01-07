//code by Vivek Reddy
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,x;
        cin >> n >> x;
        set<int> pos;
        for(int i = 0; i < n;i++){
            int t;
            cin >> t;
            pos.insert(t);
        }
        int i = 1;
        while(x>0){
            if(pos.find(i)==pos.end()){
                pos.insert(i);
                x--;
            }
            i++;
        }
        while(true){
            if(pos.find(i)==pos.end()){
                i--;
                break;
            }
            i++;
        }
        cout << i << endl;
    }
    return 0;
}
