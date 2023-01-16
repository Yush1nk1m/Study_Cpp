/****************************************************************
 * A program which reads integers in range between 0 and 9,     *
 * creates a frequency array and a histogram and prints them    *
****************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // declaration and initialization
    const int CAPACITY = 10;
    int frequencies[CAPACITY] = { 0 };
    ifstream integerFile;
    // open a integer file
    integerFile.open("integerFile.dat");
    if (!integerFile)
    {
        cout << "Cannot open the integer file." << endl;
        cout << "Terminate the program." << endl;
        return 0;
    }
    // read integers from the file, create frequency array
    int data;
    int size = 0;
    while (integerFile >> data)
    {
        if (data >= 0 && data <= 9)
        {
            size++;
            frequencies[data]++;
        }
    }
    // close the integer file
    integerFile.close();
    // print frequency array and histogram
    cout << "There are " << size << " numbers of valid datum." << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << setw(3) << i << " ";

        for (int f = 1; f <= frequencies[i]; f++)
        {
            cout << "*";
        }
        cout << " " << frequencies[i] << endl;
    }
    return 0;
}