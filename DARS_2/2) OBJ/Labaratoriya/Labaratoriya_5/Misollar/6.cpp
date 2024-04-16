#include <iostream>
#include <vector>

using namespace std;

int findLargestPositive(const vector<int> &nums)
{
    int largestPositive = 0;    // Eng katta musbat son
    bool foundPositive = false; // Musbat son topilganligi indikatori

    for (int num : nums)
    {
        if (num > 0)
        {
            if (!foundPositive || num > largestPositive)
            {
                largestPositive = num;
                foundPositive = true;
            }
        }
    }

    return foundPositive ? largestPositive : 0;
}

int main()
{
    vector<int> nums = {-10, -5, 7, -25, 13};

    int largestPositive = findLargestPositive(nums);

    if (largestPositive > 0)
    {
        cout << "Eng katta musbat son: " << largestPositive << endl;
    }
    else
    {
        cout << "Vektorda musbat son mavjud emas." << endl;
    }

    return 0;
}
