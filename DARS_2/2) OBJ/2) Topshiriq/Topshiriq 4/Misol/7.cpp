#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c)
    {
        data.resize(rows, vector<int>(cols, 0));
    }
    void fillMatrix()
    {
        cout << "Matritsa elementlarini qator bo'yicha kiriting:\n";
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cin >> data[i][j];
            }
        }
    }
    void displayMatrix() const
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << data[i][j] << " ";
            }
            cout << "\n";
        }
    }
    friend Matrix multiplyMatrices(const Matrix &m1, const Matrix &m2);
};
Matrix multiplyMatrices(const Matrix &m1, const Matrix &m2)
{
    int rows1 = m1.rows;
    int cols1 = m1.cols;
    int cols2 = m2.cols;
    Matrix result(rows1, cols2);
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            int sum = 0;
            for (int k = 0; k < cols1; ++k)
            {
                sum += m1.data[i][k] * m2.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}
int main()
{
    int rows, cols;
    cout << "Matritsa o'lchamini kiriting (qator ustunlar): ";
    cin >> rows >> cols;
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);
    cout << "Matritsa 1 elementlarini kiriting:\n";
    matrix1.fillMatrix();
    cout << "Matritsa 2 elementlarini kiriting:\n";
    matrix2.fillMatrix();
    Matrix result = multiplyMatrices(matrix1, matrix2);
    cout << "Natija matritsa:\n";
    result.displayMatrix();
    return 0;
}