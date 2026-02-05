// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 926;
    bool gamePaused = false;
    char action = 'A';
    
    if (score > 1000)
        std::cout << "Your score is over 1000." << std::endl;
    else
        std::cout << "Your score is under 1000." << std::endl;
    if (score % 2)
        std::cout << "Score is odd" << std::endl;
    
    else
        std::cout << "Score is even" << std::endl;

    std::cout << "The action " << action << ", is ";

    if(action != 'a' && action != 'w' && action != 'd' && action != 's' &&
       action != 'A' && action != 'W' && action != 'D' && action != 'S')
    {
        std::cout << "not ";
    }
    std::cout << "a movement key" << std::endl;
    
    if (gamePaused)
        std::cout << "Game is paused" << std::endl;
    else
        std::cout << "Game is not paused" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
