#include <iostream>
using namespace std;

int main()
{
    int type, size, i, j;

    cout << "Enter the type of a pattern(1 ~ 4) : ";
    cin >> type;
    cout << "Enter the size of the pattern(1 ~ 9) : ";
    cin >> size;

    switch (type)
    {
        case 1:
                for (i = 1; i <= size; i++)
                {
                    for (j = i; j >= 1; j--)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;
        /*  case 2,
            교재에 오류가 있는 것 같아 출력을
            *****
            ****
            ***
            **
            *
            과 같이 나오도록 수정 */
        case 2:
                for (i = size; i >= 1; i--)
                {
                    //for (j = size; j > i; j--)
                    //{
                    //    cout << " ";
                    //}
                    for (j = i; j >= 1; j--)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;
        case 3:
                for (i = size; i >= 1; i--)
                {
                    for (j = size; j > i; j--)
                    {
                        cout << " ";
                    }
                    for (j = i; j >= 1; j--)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;
        case 4:
                for (i = 1; i <= size; i++)
                {
                    for (j = size; j > i; j--)
                    {
                        cout << " ";
                    }
                    for (; j >= 1; j--)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;
    }
    return 0;
}