//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
    	cin >> n;
    	vector<int> a(n);
    	for (int i = 0; i < n; i++)
    		cin >> a[i];
    	
    	int ans = a[0];
    	for (int i = 2; i < n; i += 2)
    		ans = max(ans, a[i]);
    	
    	cout << ans << endl;
    }
    return 0;
}
