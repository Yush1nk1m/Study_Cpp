/************************************************************
 * A program which reads some file of integer list          *
 * using array and reversely prints it on the other file    *
************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // declaration
    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;
    ifstream inputFile;
    ofstream outputFile;
    // open input file
    inputFile.open("inFile.dat");
    if (!inputFile)
    {
        cout << "Cannot open the file." << endl;
        cout << "Terminate the program." << endl;
        return 0;
    }
    // read numbers with array from the input file
    while (inputFile >> numbers[size] && size <= 50)
    {
        size++;
    }
    // close the input file
    inputFile.close();
    // open the output file
    outputFile.open("outFile.dat");
    if (!outputFile)
    {
        cout << "Cannot open the file." << endl;
        cout << "Terminate the program." << endl;
        return 0;
    }
    // reversely print content of the array on the output file
    for (int i = size - 1; i >= 0; i--)
    {
        outputFile << numbers[i] << " ";
    }
    // close the output file
    outputFile.close();
    return 0;
}