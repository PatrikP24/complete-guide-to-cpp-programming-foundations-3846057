// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Gimme your name pls. can eyes. " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << " !" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}