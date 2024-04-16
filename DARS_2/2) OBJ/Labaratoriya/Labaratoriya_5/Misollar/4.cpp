#include <iostream>
#include <vector>

using namespace std;

int findMinPositive(const vector<int> &nums)
{
    int minPositive = INT_MAX; 
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0 && nums[i] < minPositive)
        {
            minPositive = nums[i];  
        }
    }
    if (minPositive == INT_MAX)
    {
        return 0;  
    }
    return minPositive;
}

int main()
{ 
    vector<int> nums = {-3, 5, -7, 25, 13};
 
    int minPositive = findMinPositive(nums);
 
    cout << "Eng kichik musbat son: " << minPositive << endl;

    return 0;
}
