#include "account.h"

int main()
{
    fstream fs;
    fs.open("output2.txt", ios::binary | ios::in | ios::out);
    if (!fs.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    int source, destination;
    double amount;
    while (true)
    {
        cout << "Enter the ID who sends money(0 to exit) : ";
        cin >> source;
        if (source <= 0) break;

        cout << "Enter the ID who receives money(0 to exit) : ";
        cin >> destination;
        if (destination <= 0) break;

        cout << "Enter the amount of this transaction : ";
        cin >> amount;

        Account src, dest;
        fs.seekg((source - 1) * sizeof(Account));
        fs.read(reinterpret_cast<char*>(&src), sizeof(Account));
        fs.seekg((source - 1) * sizeof(Account));
        src.setAmount(src.getAmount() - amount);
        fs.write(reinterpret_cast<char*>(&src), sizeof(Account));

        fs.seekg((destination - 1) * sizeof(Account));
        fs.read(reinterpret_cast<char*>(&dest), sizeof(Account));
        fs.seekg((destination - 1) * sizeof(Account));
        dest.setAmount(dest.getAmount() + amount);
        fs.write(reinterpret_cast<char*>(&dest), sizeof(Account));
    }

    fs.seekg(SEEK_SET);
    cout << "The information for accounts" << endl;
    for (int i = 0; i < 4; i++)
    {
        Account temp;
        fs.read(reinterpret_cast<char*>(&temp), sizeof(Account));
        cout << "ID : " << temp.getId() << endl;
        cout << "Amount : " << temp.getAmount() << endl;
    }
    fs.close();
    
    return 0;
}