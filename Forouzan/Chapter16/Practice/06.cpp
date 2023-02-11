#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
using namespace std;

bool isSame(const char* file1, const char* file2)
{
    ifstream stream1, stream2;
    
    stream1.open(file1);
    if (!stream1.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    stream2.open(file2);
    if (!stream2.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    char c1, c2;
    while (stream1 >> c1 && stream2 >> c2)
    {
        if (c1 != c2)
        {
            stream1.close();
            stream2.close();
            return false;
        }
    }
    if (stream1 >> c1 || stream2 >> c2)
    {
        stream1.close();
        stream2.close();
        return false;
    }
    stream1.close();
    stream2.close();
    return true;
}

int main()
{
    cout << boolalpha << isSame("test.txt", "test2.txt") << endl;
    return 0;
}