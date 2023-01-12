class Point
{
    private:
        int x;
        int y;
    public:
        void setX(int x);
        void setY(int y);
        int getX() const;
        int getY() const;
        void where(const Point& point) const;
        double distance(const Point& point) const;
};