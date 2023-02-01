#include "04.h"

Set::Set()
: size(0)
{
    set = new int[size];
}

Set::~Set()
{
    delete[] set;
}

const Set Set::set_union(const Set& second) const
{
    Set temp;
    for (int i = 0; i < size; i++)
    {
        temp += set[i];
    }
    for (int i = 0; i < second.size; i++)
    {
        temp += (second.set)[i];
    }
    return temp;
}

const Set Set::set_difference(const Set& second) const
{
    Set temp;
    for (int i = 0; i < size; i++)
    {
        temp += set[i];
    }
    for (int i = 0; i < second.size; i++)
    {
        temp -= (second.set)[i];
    }
    return temp;
}

const Set Set::set_intersection(const Set& second) const
{
    Set temp;
    for (int i = 0; i < size; i++)
    {
        bool isIn = false;
        for (int j = 0; j < second.size; j++)
        {
            if (set[i] == second.set[j])
            {
                isIn = true;
            }
        }
        if (isIn)
        {
            temp += set[i];
        }
    }
    return temp;
}

Set& Set::operator+=(int data)
{
    bool isIn = false;
    for (int i = 0; i < size; i++)
    {
        if (set[i] == data)
        {
            isIn = true;
        }
    }
    if (!isIn)
    {
        int* temp = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = set[i];
        }
        temp[size] = data;
        delete[] set;
        size++;
        set = new int[size];
        for (int i = 0; i < size; i++)
        {
            set[i] = temp[i];
        }
        delete[] temp;
    }
    return (*this);
}

Set& Set::operator-=(int data)
{
    for (int i = 0; i < size; i++)
    {
        if (set[i] == data)
        {
            int* temp = new int[size - 1];
            for (int j = i; j < size - 1; j++)
            {
                set[j] = set[j + 1];
            }
            size--;
            for (int i = 0; i < size; i++)
            {
                temp[i] = set[i];
            }
            delete[] set;
            set = new int[size];
            for (int i = 0; i < size; i++)
            {
                set[i] = temp[i];
            }
            delete[] temp;
        }
    }
    return (*this);
}

const Set operator*(const Set& first, const Set& second)
{
    Set temp = first.set_intersection(second);
    return temp;
}

const Set operator+(const Set& first, const Set& second)
{
    Set temp = first.set_union(second);
    return temp;
}

const Set operator-(const Set& first, const Set& second)
{
    Set temp = first.set_difference(second);
    return temp;
}

void Set::print() const
{
    cout << "{ ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << set[i] << ", ";
    }
    cout << set[size - 1] << " }";
}