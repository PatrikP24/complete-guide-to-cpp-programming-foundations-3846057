// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl << std::endl;

    // Addition assignment
    ammo += 10;
    std::cout << "ammo after finding more: " << ammo << std::endl << std::endl;

    // Subtraction assignment
    ammo -= 5;
    std::cout << "ammo after using some: " << ammo << std::endl << std::endl;

    // Multiplication assignment
    incoming_zombies *= 2;
    std::cout << "zombies now: " << incoming_zombies << std::endl << std::endl;

    // Division assignment
    ammo /= 2;
    std::cout << "after sharing ammo: " << ammo << std::endl << std::endl;

    // Remainder assignment
    ammo %= 6;
    std::cout << "ammo after losing backpack: " << ammo << std::endl ;

    std::cout << std::endl << std::endl;
    return 0;
}
