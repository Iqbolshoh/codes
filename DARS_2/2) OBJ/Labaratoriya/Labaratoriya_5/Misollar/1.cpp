#include <iostream>
#include <vector>

using namespace std;

class NumberVector
{
private:
    vector<int> numbers;

public:
    NumberVector(const vector<int> &nums) : numbers(nums) {}

    int findMax() const
    {
        int maxNumber = numbers[0];
        for (size_t i = 1; i < numbers.size(); ++i)
        {
            if (numbers[i] > maxNumber)
            {
                maxNumber = numbers[i];
            }
        }
        return maxNumber;
    }
};

int main()
{
    vector<int> nums = {10, 5, 7, 25, 13};

    NumberVector numVec(nums);

    int maxNum = numVec.findMax();

    cout << "Eng katta son: " << maxNum << endl;

    return 0;
}
