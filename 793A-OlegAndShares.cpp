//code by Vivek Reddy
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    int n, k;
    long long mn = 2e9 + 1; // Using long long to prevent overflow
    std::cin >> n >> k;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        mn = std::min(mn, static_cast<long long>(arr[i])); // Use long long for comparison
    }

    long long res = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] - mn) % k != 0) {
            std::cout << "-1\n";
            return 0;
        }
        res += (arr[i] - mn) / k;
    }

    std::cout << res << "\n";
    return 0;
}
