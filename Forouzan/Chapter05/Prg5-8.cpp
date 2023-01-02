/***********************************************
 * terminate loop statement with EOF and flag  *
***********************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // declaration
    ifstream infile;
    int num;
    bool flag;
    // open a file
    infile.open("numbers.dat");
    // loop statement to find a number over 150
    flag = false;
    while (infile >> num && !flag)
    {
        if (num >= 150)
        {
            cout << "A number you are looking for : " << num << endl;
            flag = true;
        }
    }
    // check flag
    if (!flag)
    {
        cout << "The file has no number over 150." << endl;
    }
    infile.close();
    return 0;
}