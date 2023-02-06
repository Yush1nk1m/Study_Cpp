#include <stdexcept>
#include <iostream>
using namespace std;

int main()
{
    string bigAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index;
    try
    {
        cout << "Enter the index of bigAlpha : ";
        cin >> index;
        cout << "Corresponding alphabet : " << bigAlpha.at(index) << endl;
    }
    catch(out_of_range ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}