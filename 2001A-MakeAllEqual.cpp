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
        unordered_map<int, int> freq;
        int max_freq = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            max_freq = max(max_freq, freq[x]); 
        }
        cout << n - max_freq << '\n';
    }
    return 0;
}
