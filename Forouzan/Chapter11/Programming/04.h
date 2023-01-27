#include "03.h"

class Cylinder : public Circle
{
    private:
        double height;
    public:
        Cylinder(double radius, double height);
        ~Cylinder();
        double getHeight() const;
        double getSurface() const;
        double getVolume() const;
};