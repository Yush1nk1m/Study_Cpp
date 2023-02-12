#include "account.h"

int main()
{
    Account client1(1, 1000.0);
    Account client2(2, 3000.0);
    Account client3(3, 2000.0);
    Account client4(4, 5000.0);
    Account client5(5, 4000.0);

    ofstream os;
    os.open("output2.txt", ios::binary | ios::out);
    if (!os.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    os.write(reinterpret_cast<char*>(&client1), sizeof(Account));
    os.write(reinterpret_cast<char*>(&client2), sizeof(Account));
    os.write(reinterpret_cast<char*>(&client3), sizeof(Account));
    os.write(reinterpret_cast<char*>(&client4), sizeof(Account));
    os.write(reinterpret_cast<char*>(&client5), sizeof(Account));
    os.close();

    return 0;
}