//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n,m,mi=1001;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m;i++)
        cin >> a[i];
    vector<int> b(n+1,0);
    for(int i = 0; i < m;i++){
        b[a[i]]++;
    }
    cout << *min_element(b.begin()+1,b.end()) << endl;
    return 0;
}
