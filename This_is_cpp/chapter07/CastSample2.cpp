#include "tchar.h"
#include <iostream>
using namespace std;

class CShape
{
public :
    CShape() { }
    virtual ~CShape() { }
    virtual void Draw() { cout << "CShape::Draw()" << endl; }
};

class CRectangle : public CShape
{
public :
    virtual void Draw() { cout << "CRectangle::Draw()" << endl; }
};

class CCircle : public CShape
{
public :
    virtual void Draw() { cout << "CCircle::Draw()" << endl; }
};

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "Enter number of shape. [1 : rectangle, 2 : circle] : " << endl;
    int nInput = 0;
    cin >> nInput;

    CShape* pShape = nullptr;
    if (nInput == 1)
        pShape = new CRectangle;
    
    else if (nInput == 2)
        pShape = new CCircle;
    
    else
        pShape = new CShape;

    // good example
    pShape->Draw();

    // 'very' bad example
    // no reason to write code like this utilizing virtual function
    CRectangle* pRect = dynamic_cast<CRectangle*>(pShape);
    if (pRect != NULL)
        cout << "CRectangle::Draw()" << endl;

    else
    {
        CCircle* pCircle = dynamic_cast<CCircle*>(pShape);
        if (pCircle != NULL)
            cout << "CCircle::Draw()" << endl;

        else
            cout << "CShape::Draw()" << endl;
    }

    return 0;
}