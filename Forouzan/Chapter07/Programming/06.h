class Triangle
{
    private:
        int firstSide;
        int secondSide;
        int thirdSide;
    public:
        Triangle(int fs, int ss, int ts);
        void getSides() const;
        int getPerimeter() const;
        double getArea() const;    
};