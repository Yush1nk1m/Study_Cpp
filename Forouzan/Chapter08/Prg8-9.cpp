/****************************************************************
 * A program which stores and utilizes names, scores, grades    *
 * of 5 people with parallel arrays                             *
****************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
/****************************************************************
 * findGrade function receives score constant array,            *
 * grade array, size as arguments and make the second array     *
 * with the first array                                         *
****************************************************************/
void findGrades(const int scores[], char grades[], int size)
{
    char temp[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    for (int i = 0; i < size; i++)
    {
        grades[i] = temp[scores[i] / 10];
    }
    return;
}

int main()
{
    // declare 3 arrays and initialize 2 arrays
    string names[4] = {"George", "John", "Luci", "Mary"};
    int scores[4] = {82, 73, 91, 72};
    char grades[4];
    // function call
    findGrades(scores, grades, 4);
    // print three arrays' values
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << left << names[i] << "\t" << setw(2) << scores[i] << "\t" << setw(2) << grades[i] << endl;
    }
    return 0;
}