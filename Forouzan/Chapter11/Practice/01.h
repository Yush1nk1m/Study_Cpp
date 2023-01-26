// First class declaration
class First
{
    private:
        int a;
    public:
        void set(int a);
        void print() const;
};
// Second class declaration
class Second : public First
{
    private:
        int b;
    public:
        void set(int a, int b);
        void print() const;
}