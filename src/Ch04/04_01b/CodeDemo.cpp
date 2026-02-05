// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define LEVEL_COUNT 4

int main(){
    const size_t LEVEL_COUNT = 4;
    int enemies[LEVEL_COUNT];
    float level_diff[] = {1.0, 3.5, 6.0, 10,5};
    enemies[0] = 10;
    enemies[1] = 20;
    enemies[2] = 40;
    enemies[3] = 70;

    std::cout << "The game has " << LEVEL_COUNT << " levels: " << std::endl;
    std::cout << "Level 1: " << enemies[0] << std::endl;
    std::cout << "Level 2: " << enemies[1] << std::endl;
    std::cout << "Level 3: " << enemies[2] << std::endl;
    std::cout << "Level 4: " << enemies[3] << std::endl << std::endl;

    std::cout << "These levels have 4 difficulties: " << std::endl;
    std::cout << "Level 1: " << level_diff[0] << std::endl;
    std::cout << "Level 2: " << level_diff[1] << std::endl;
    std::cout << "Level 3: " << level_diff[2] << std::endl;
    std::cout << "Level 4: " << level_diff[3] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
