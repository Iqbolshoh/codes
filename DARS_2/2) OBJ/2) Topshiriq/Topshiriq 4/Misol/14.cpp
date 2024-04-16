#include <iostream>

using namespace std;

class DataList
{
private:
    int *data;
    int size;

public:
    DataList(int s) : size(s)
    {
        data = new int[size];
        for (int i = 0; i < size; ++i)
        {
            data[i] = 0;
        }
    }

    ~DataList()
    {
        delete[] data;
    }

    void addData(int value, int index)
    {
        if (index >= 0 && index < size)
        {
            data[index] = value;
        }
        else
        {
            cout << "Invalid index!" << endl;
        }
    }
    double calculateAverage()
    {
        if (size == 0)
        {
            cout << "DataList is empty." << endl;
            return 0.0;
        }

        int sum = 0;
        for (int i = 0; i < size; ++i)
        {
            sum += data[i];
        }

        return static_cast<double>(sum) / size;
    }
};

int main()
{
    DataList dataList(5);

    dataList.addData(10, 0);
    dataList.addData(20, 1);
    dataList.addData(30, 2);
    dataList.addData(40, 3);
    dataList.addData(50, 4);

    cout << "Average: " << dataList.calculateAverage() << endl;

    return 0;
}
