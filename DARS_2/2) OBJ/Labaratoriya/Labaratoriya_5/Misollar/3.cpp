#include <iostream>
#include <vector>

using namespace std;

int findMinIndex(const vector<int> &nums)
{
    int minIndex = 0;
    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i] < nums[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

int main()
{
    vector<int> nums = {10, 5, 7, 25, 13};

    int minIndex = findMinIndex(nums);

    cout << "Eng kichik elementning indeksi: " << minIndex << endl;

    return 0;
}
