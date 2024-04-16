#include <iostream>
#include <vector>

using namespace std;

void findNumbersGreaterThanB(int B, const vector<int> &nums)
{
    bool found = false;

    for (int num : nums)
    {
        if (num > B)
        {
            cout << num << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "0 0";
    }

    cout << endl;
}

int main()
{
    // B soni
    int B = 5;

    // Sonlar vektori
    vector<int> nums = {1, 6, 3, 8, 2, 7, 9, 4, 10, 11};

    // B dan katta sonlarni chiqarish
    findNumbersGreaterThanB(B, nums);

    return 0;
}
