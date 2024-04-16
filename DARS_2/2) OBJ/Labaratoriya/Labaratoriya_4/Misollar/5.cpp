#include <iostream>
#include <vector>

using namespace std;

// Matritsa sinfi
class Matrix
{
private:
    vector<vector<int>> data;

public:
    // Konstruktor matritsa elementlari bilan
    Matrix(const vector<vector<int>> &matrixData) : data(matrixData) {}

    // + operatori qayta yuklash
    Matrix operator+(const Matrix &other) const
    {
        vector<vector<int>> resultData;

        // Yaratilgan matritsalar o'lchamlari bir xil bo'lishi kerak
        if (data.size() != other.data.size() || data[0].size() != other.data[0].size())
        {
            cerr << "Matritsalar o'lchamlari mos emas!" << endl;
            return *this;
        }

        // Matritsalarni qo'shish
        for (size_t i = 0; i < data.size(); ++i)
        {
            vector<int> row;
            for (size_t j = 0; j < data[0].size(); ++j)
            {
                row.push_back(data[i][j] + other.data[i][j]);
            }
            resultData.push_back(row);
        }

        return Matrix(resultData);
    }

    // Matritsani chiqarish
    void display() const
    {
        for (const auto &row : data)
        {
            for (int element : row)
            {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    // Birinchi matritsa
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix m1(matrix1);

    // Ikkinchi matritsa
    vector<vector<int>> matrix2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    Matrix m2(matrix2);

    // Matritsalarni qo'shish
    Matrix result = m1 + m2;

    // Natijani chiqarish
    cout << "Matritsalarning yig'indisi:" << endl;
    result.display();

    return 0;
}
