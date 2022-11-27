#include <iostream>

class Marine {
    int hp;                     // health point of marine
    int coord_x, coord_y;       // coordination of marine
    int damage;                 // attack damage of marine
    bool is_dead;

    public :
        Marine();               // Default constructor
        Marine(int x, int y);   // Create marine at the coordination (x, y)

        int attack();                           // return the attack damage
        void be_attacked(int damage_earn);      // return the earned damage
        void move(int x, int y);                // new coordination

        void show_status();     // show the status
};

Marine::Marine() {
    hp = 50;
    coord_x = coord_y = 0;
    damage = 5;
    is_dead = false;
}

Marine::Marine(int x, int y) {
    coord_x = x;
    coord_y = y;
    hp = 50;
    damage = 5;
    is_dead = false;
}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}

int Marine::attack() { return damage; }

void Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;
}

void Marine::show_status() {
    std::cout << " *** Marine *** " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
    std::cout << " HP : " << hp << std::endl;
}

int main() {
    Marine marine1(2, 3);
    Marine marine2(3, 5);

    marine1.show_status();
    marine2.show_status();

    std::cout << std::endl << "Marine 2 has been attakced by marine 1." << std::endl;
    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();
}