#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findMinMaxIndices(const vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return make_pair(-1, -1);
    }

    int maxIndex = 0; // Eng katta element indeksi
    int minIndex = 0; // Eng kichik element indeksi

    for (int i = 1; i < n; ++i)
    {
        if (nums[i] > nums[maxIndex])
        {
            maxIndex = i;
        }
        else if (nums[i] < nums[minIndex])
        {
            minIndex = i;
        }
    }

    return make_pair(maxIndex, minIndex);
}

int main()
{
    vector<int> nums = {10, 5, 7, 25, 13};

    pair<int, int> indices = findMinMaxIndices(nums);

    cout << "Birinchi uchragan eng katta element tartib raqami: " << indices.first << endl;
    cout << "Oxirgi uchragan eng kichik element tartib raqami: " << indices.second << endl;

    return 0;
}
