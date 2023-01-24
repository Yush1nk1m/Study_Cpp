/****************************************************
 * A program which reads string of the input file   *
 * and create right-aligned output file             *
****************************************************/
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // declaration of file obejct and string object
    ifstream inputFile;
    ofstream outputFile;
    string line;
    // read the file and find out the number of character of the most-character line
    inputFile.open("inFile.dat");
    assert(inputFile);
    int maxSize = 0;
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        if (line.size() > maxSize)
        {
            maxSize = line.size();
        }
    }
    inputFile.close();
    // read the content of the input file again and print
    inputFile.open("inFile.dat");
    assert(inputFile);
    outputFile.open("outFile.dat");
    assert(outputFile);
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        string temp(maxSize - line.size(), ' ');
        line.insert(0, temp);
        line.append("\n");
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}