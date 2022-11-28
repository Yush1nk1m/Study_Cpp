#include <string.h>
#include <iostream>

class Photon_Cannon {
        int hp, shield;
        int coord_x, coord_y;
        int damage;
    
    public :
        Photon_Cannon(int x, int y);
        Photon_Cannon(const Photon_Cannon& pc);

        void show_status();
};

Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
    std::cout << "Copy constructor has been called." << std::endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;
}

Photon_Cannon::Photon_Cannon(int x, int y) {
    std::cout << "Constructor has been called." << std::endl;
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
}

void Photon_Cannon::show_status() {
    std::cout << "Photon Cannon " << std::endl;
    std::cout << "  Location : ( " << coord_x << " , " << coord_y << " )" << std::endl;
    std::cout << "  HP : " << hp << std::endl;
}

int main() {
    Photon_Cannon pc1(3, 3);
    Photon_Cannon pc2(pc1);
    Photon_Cannon pc3 = pc2;

    pc1.show_status();
    pc2.show_status();
}