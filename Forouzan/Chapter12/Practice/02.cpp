class First
{
    private:
        int fr;
    public:
        First(int fr);
        virtual ~First();
        virtual void print() const;
};

class Second : public First
{
    private:
        int se;
    public:
        Second(int fr, int se);
        ~Second();
        void print() const;
};

int main()
{
    First* ptr;
    Second second(0, 0);
    ptr = &second;
    ptr->print();
    delete ptr;

    return 0;
}