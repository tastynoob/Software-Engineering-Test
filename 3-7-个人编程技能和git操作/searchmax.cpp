#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    std::cout << "ctrl+D 结束输入";
    std::vector<int> arr;
    for (int i; std::cin >> i;)
    {
        arr.push_back(i);
    }
    std::vector<int> dp(arr.size() + 1);
    dp[0] = 0;
    int res = INT32_MIN;
    for (int i = 1; i <= arr.size(); i++)
    {
        dp[i] = dp[i - 1] + arr[i] > arr[i] ? dp[i - 1] + arr[i] : arr[i];
        res = dp[i] > res ? dp[i] : res;
    }
    std::cout << res << "\n";
}