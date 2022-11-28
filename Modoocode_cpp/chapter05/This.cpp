#include <iostream>

class Marine {
    static int total_marine_num;
    const static int i = 0;

    int hp;
    int coord_x, coord_y;
    bool is_dead;

    const int default_damage;

    public :
        Marine();
        Marine(int x, int y);
        Marine(int x, int y, int default_damage);

        int attack();
        Marine& be_attacked(int damage_earn);
        void move(int x, int y);
        
        void show_status();
        static void show_total_marine();

        ~Marine() { total_marine_num--; }
};

int Marine::total_marine_num = 0;

void Marine::show_total_marine() {
    std::cout << "Total number of marines : " << total_marine_num << std::endl;
}

Marine::Marine() : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y) : hp(50), coord_x(x), coord_y(y), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y, int default_damage) : hp(50), coord_x(x), coord_y(y), default_damage(default_damage), is_dead(false) {
    total_marine_num++;
}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}

int Marine::attack() { return default_damage; }

Marine& Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;

    return *this;
}

void Marine::show_status() {
    std::cout << " *** Marine ***" << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " )" << std::endl;
    std::cout << " HP : " << hp << std::endl;
    std::cout << " Current total number of marines : " << total_marine_num << std::endl;
}

int main() {
    Marine marine1(2, 3, 5);
    marine1.show_status();

    Marine marine2(3, 5, 10);
    marine2.show_status();

    std::cout << std::endl << "Marine 2 has been attacked twice times by Marine 1" << std::endl;
    marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();
}