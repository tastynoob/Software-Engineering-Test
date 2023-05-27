#include <iostream>
#include <vector>

int mssos(std::vector<int> arr)
{
    int thisSum = 0, maxSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int tmp = arr[i];
        thisSum += tmp;
        if (thisSum > maxSum)
        {
            maxSum = thisSum;
        }
        else if (thisSum < 0)
        {
            thisSum = 0;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}

int main() {
    int n;
    std::vector<int> arr;
    while(scanf("%d",&n) != EOF) {
        arr.push_back(n);
    }
    mssos(arr);
}