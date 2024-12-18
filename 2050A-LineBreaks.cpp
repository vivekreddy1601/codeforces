//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m,c=0;
        cin >> n >> m;
        vector<int> v;
        while(n--){
            string s;
            cin >> s;
            v.push_back(s.size());
        }
        //sort(v.begin(),v.end());
        for(int i = 0;i < v.size();i++){
            if(m-v[i]>=0){
                c++;
                m-=v[i];
            }else{
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
