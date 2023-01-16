/************************************************************
 * A program which reads integers from a file as an array   *
 * and prints the sum, average, min, max of numbers         *
************************************************************/
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int main()
{
    // file declaration
    ifstream inputFile;
    // array and variable declaration
    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;
    // initialization
    int sum = 0;
    double average;
    int smallest = numeric_limits<int>::max();
    int largest = numeric_limits<int>::min();
    // open a file doing data validation
    inputFile.open("numFile.dat");
    if (!inputFile)
    {
        cout << "Some error has been occurred opening input file." << endl;
        cout << "Stop the program." << endl;
        return 0;
    }
    // read integers from the file
    while (inputFile >> numbers[size])
    {
        size++;
    }
    // close the file
    inputFile.close();
    // find out the sum, average, min, max
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    average = static_cast<double>(sum) / size;
    // print the result
    cout << "There are " << size << " numbers of integers." << endl;
    cout << "The sum : " << sum << endl;
    cout << "The average : " << average << endl;
    cout << "The minimum value : " << smallest << endl;
    cout << "The maximum value : " << largest << endl;
    return 0;
}