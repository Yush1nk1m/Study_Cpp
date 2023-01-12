class Zeller
{
    private:
        int year;
        int month;
        int day;
    public:
        Zeller(int year, int month, int day);
        int getWeekday() const;
};