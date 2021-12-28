/*
    Choose your own adventure game based off of a dnd 4th/5th level adventure for Dungeons & Dragons 5e
    Inspiration: https://www.dmsguild.com/product/170937/The-Wild-Sheep-Chase--A-SingleSession-Adventure
*/

#include <iostream>

int main() {

    bool cont = false;
    char answer = '-';

    std::cout << "\n*======================*\n";
    std::cout << "*  A Wild Sheep Chase  *\n";
    std::cout << "*======================*\n";

    std::cout << "\nThere is a sound of clattering hooves, \n"
              << "surprised yelps and a frantic bleating,\n"
              << "before you can react, a sheep bounds towards you.\n"
              << "The beast appears to be a regular sheep in every way?\n"
              << "But... It is carrying and elaborate scroll in its mouth.\n\n";

    std::cout << "(Hit Enter Continue...)";
    std::cin.get();
    std::cin.clear();
    
    std::cout << "\nThe sheep tries to get close to you and waves the scroll at you,\n"
              << "letting you take it should you reach for it.\n\n";

    std::cout << "Would you like to take and use the scroll?\n";
    std::cout << "A) Yes\n B) No\n\n";

    std::cin >> answer;

    while(answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B'){
        std::cout << "Invalid input! Try Again! \n";
        std::cin >> answer;
    }

    if(answer == 'a' || answer == 'A') {
        cont = true;
    }

    if (!cont) {
        std::cout << "Game over\n";
        return 0;
    }

    std::cout << "Test";

}
