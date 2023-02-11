#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void copyArray(const char* filename, const char* array)
{
    ofstream os;
    os.open(filename);
    if (!os.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }
    os << array;
    os.close();
}

int main()
{
    char arr[] = {'H', 'E', 'L', 'L', 'O', ',', ' ', 'W', 'O', 'R', 'L', 'D', '!', '\0'};
    copyArray("test.txt", arr);
    return 0;
}