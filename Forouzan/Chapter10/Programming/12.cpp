#include <iostream>
#include <string>
using namespace std;

class Address
{
    private:
        unsigned int decimal;
        string binary;
        string pointing;
    public:
        Address(unsigned int decimal);
        ~Address();
        void decimalExp() const;
        void binaryExp() const;
        void pointSepExp() const;
};

Address::Address(unsigned int decimal)
: decimal(decimal)
{
    string temp = "";
    binary = "";
    pointing = "";
    
    while (decimal > 0)
    {
        temp += (decimal % 2 + 48);
        decimal /= 2;
    }

    while (temp.size() < 32)
    {
        temp += "0";
    }

    int size = temp.size();
    for (int i = size - 1; i >= 0; i--)
    {
        binary += temp[i];
    }

    unsigned int byteArr[8] = {128, 64, 32, 16, 8, 4, 2, 1};
    for (int i = 0; i < 32; i += 8)
    {
        unsigned int tempInt = 0;
        for (int j = i; j < i + 8; j++)
        {
            tempInt += byteArr[j % 8] * static_cast<unsigned int>(binary[j] - 48);
        }
        cout << tempInt << endl;
        pointing += to_string(tempInt);
        if (i + 8 != 32)
        {
            pointing += ".";
        }
    }

    size = binary.size();
    int count = 0;
    for (int i = 0; i < size; i++, count++)
    {
        if (count != 0 && count % 8 == 0)
        {
            binary.insert(i, " ");
            i++;
        }
    }
}

Address::~Address()
{
}

void Address::decimalExp() const
{
    cout << "Decimal form : " << decimal << endl;
}

void Address::binaryExp() const
{
    cout << "Binary form : " << binary << endl;
}

void Address::pointSepExp() const
{
    cout << "Pointing form : " << pointing << endl;
}

int main()
{
    int decimal = 71832456;
    Address address(decimal);

    address.decimalExp();
    address.binaryExp();
    address.pointSepExp();

    return 0;
}