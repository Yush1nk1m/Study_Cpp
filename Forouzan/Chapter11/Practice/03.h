// First class definition
class First
{
    private:
        int a;
    public:
        First(int a);
        void print() const;
};
// Second class definition
class Second : public First
{
    private:
        int b;
    public:
        Second(int a, int b);
        void print() const;
};
// Third class definition
class Third : public Second
{
    private:
        int c;
    public:
        Third(int a, int b, int c);
        void print() const;
}