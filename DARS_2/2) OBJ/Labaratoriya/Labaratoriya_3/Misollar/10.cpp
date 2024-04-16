#include <iostream>
#include <vector>

using namespace std;

// Talaba sinfi
template <typename T>
class Student
{
private:
    int id;
    vector<T> grades; // Baholari
    int course;

public:
    Student(int i, vector<T> g, int c) : id(i), grades(g), course(c) {}

    T calculateGPA()
    {
        T sum = 0;
        for (const auto &grade : grades)
        {
            sum += grade;
        }
        return sum / grades.size();
    }

    bool passToNextCourse()
    {
        return calculateGPA() >= 2.0; // GPA 2.0 dan katta bo'lgan talabalar otadi
    }
};

int main()
{
    vector<double> student1Grades = {3.5, 4.0, 3.7};
    Student<double> student1(101, student1Grades, 2);

    vector<double> student2Grades = {2.8, 3.2, 2.9};
    Student<double> student2(102, student2Grades, 1);

    cout << "Student 1 GPA: " << student1.calculateGPA() << endl;
    if (student1.passToNextCourse())
    {
        cout << "Student 1 passed to the next course" << endl;
    }
    else
    {
        cout << "Student 1 failed to pass to the next course" << endl;
    }

    cout << "Student 2 GPA: " << student2.calculateGPA() << endl;
    if (student2.passToNextCourse())
    {
        cout << "Student 2 passed to the next course" << endl;
    }
    else
    {
        cout << "Student 2 failed to pass to the next course" << endl;
    }

    return 0;
}
