class One
{
    private:
        int x;
        int y;
    public:
        One();
        One(int x, int y);
        One(const One& one);
        ~One();
        void setX(int x);
        void setY(int y);
        int getX() const;
        int getY() const;
};