/*
    Choose your own adventure game based off of a dnd 4th/5th level adventure for Dungeons & Dragons 5e
    Inspiration: https://www.dmsguild.com/product/170937/The-Wild-Sheep-Chase--A-SingleSession-Adventure
*/

#include <iostream>
#include <cstdlib>

int main() {

    srand(time(NULL));

    bool cont = false;
    char answer = '-';
    int orcHealth = 67;
    int nokesHealth = 80;
    int playerHealth = 100;

    std::cout << "\n*======================*\n";
    std::cout << "*  A Wild Sheep Chase  *\n";
    std::cout << "*======================*\n";

    std::cout << "\nThere is a sound of clattering hooves, \n"
              << "surprised yelps and a frantic bleating,\n"
              << "before you can react, a sheep bounds towards you.\n"
              << "The beast appears to be a regular sheep in every way?\n"
              << "But... It is carrying and elaborate scroll in its mouth.\n";

    std::cout << "\n(Hit Enter Continue...)";
    std::cin.get();
    std::cin.clear();
    std::cin.ignore(100, '\n');

    
    std::cout << "\nThe sheep tries to get close to you and waves the scroll at you,\n"
              << "letting you take it should you reach for it.\n\n";

    std::cout << "Would you like to take and use the scroll?\n";
    std::cout << "A) Yes\nB) No\n\n";

    std::cin >> answer;

    //Verfies Users input
    while(answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B'){
        std::cout << "Invalid input! Try Again! \n";
        std::cin >> answer;
    }

    if(answer == 'a' || answer == 'A') {
        cont = true;
    }

    //if continue is false, Game Over
    if (!cont) {
        std::cout << "Game Over! \n";
        return 0;
    }

    answer = '-';
    cont = false;

    std::cout << "You hear the sheep’s baaing instantly morphs into a language you can understand.\n";
    std::cout << "The sheep introduces itself as Finethir Shinebright, a wizard in dire need of aid.\n";
    std::cout << "He will attempt to tell his story, but shortly after he starts the sound of growling fill the air…\n";

    std::cout << "\n(Hit Enter Continue...)";
    std::cin.get();
    std::cin.clear();
    std::cin.ignore(100, '\n');

    std::cout << "A huge Half-Orc swaggers towards you, \n"
              << "pushing through the crowd without a care for angry yells left in his wake.\n";

    std::cout << "The half-Orc, Guz, demands that he be given 'Master Noke's sheep.' \n"
              << "He says it escaped, and is of great sent-ee-ment-all value to his master.\n";
    std::cout << "No matter how well you try to hide the sheep, Guz knows you have him\n"
              << "and he will not take no for an answer\n";

    std::cout << "It comes down to you, What would you like to do?\n";
    std::cout << "A) Negotiate?\nB) Give up the sheep\nC) Fight!\n\n";

    std::cin >> answer;
    
    //Verifes users input
    while(answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B' && answer != 'c' && answer != 'C'){
        std::cout << "Invalid input! Try Again! \n";
        std::cin >> answer;
    }

    //conditional for negotiation. User has a chance from 0 - 20, if random number is >= 10 they succeed in negotiation.
    if(answer == 'a' || answer == 'A'){
        std::cout << "You attempt to negotiate with Guz";
        if(std::rand() % 20 >= 10){
            std::cout << ", you bribe him with 20 gold and he leaves.\n";
            cont = true;
        } else {
            std::cout << ", you fail, he snatches the sheep from you and leaves.\n";
        }
    }

    //simple conditional for giving away the sheep
    if(answer == 'b' || answer == 'B'){
        std::cout << "You sheepishly give up the sheep\n";
    }

    //conditional for fighting mechanics. 
    if(answer == 'c' || answer == 'C'){

        //while loop to verify orc is allive before fighting happens
        while(orcHealth >= 0) {
            if(playerHealth >= 0){
                int orcAttack = std::rand() % 12 + 1;
                int playerAttack = std::rand() % 14 + 1;
                orcHealth -= playerAttack;
                std::cout << "You swing at Guz and inflict " << playerAttack << " damage\n";
                if(orcAttack >= 0){
                    playerHealth -= orcAttack;
                    std::cout << "Guz swings back and inflicts " << orcAttack << " damage\n";
                }
            } else {
                std::cout << "You faint from Guz's furry and he escapes with the sheep\n";
                break;
            }
        }
        if(orcHealth <= 0){
            cont = true;
            std::cout << "\nGuz faints and you escape with the sheep!\n";
        }
    }

    //if continue is false, Game Over
    if (!cont) {
        std::cout << "\n Game Over! \n";
        return 0;
    }
    answer = '-';
    cont = false;
    playerHealth = 100;

    std::cout << "\n(Hit Enter Continue...)\n";
    std::cin.get();
    std::cin.clear();
    std::cin.ignore(100, '\n');


    std::cout << "\n\"Without Guz's help, Noke is doomed!\" Exclaims the talking sheep!\n";
    std::cout << "The sheep explains that his former apprentice, Noke, \n"
              << "still dwells in his old home, located just to the southeast of town.\n";

    std::cout << "\n(Hit Enter Continue...)\n";
    std::cin.get();
    std::cin.clear();
    std::cin.ignore(100, '\n');

    std::cout << "\n You Head towrds the house's location\n\n";
    std::cout << "When you aproach the house, you notice that\n" 
              << "Rather than stone or glass, Shinebright \n" 
              << "fashioned his home from the living branches\n" 
              << "of four sturdy oak trees. \n";

    std::cout << "\n(Hit Enter Continue...)\n";
    std::cin.get();
    std::cin.clear();
    std::cin.ignore(100, '\n');

    std::cout << "\nOnce you get to the house, you sneak in\n"
              << "to avoid causing any suspicion.\n";

    std::cout << "\nShinebright leads you to where the wand is located.\n"
              << "He reminds you that with this wand he can turn back into his elvin form\n";

    std::cout << "\nYou head up a spiral staircase towards the wizard quarters\n"
              << "where you discover Noke is asleep, wand in hand.\n";

    std::cout << "\nYou have a choice, make it wisely.\n";
    std::cout << "A) Try to pull from his hand?\nB) Wake him\nC) Run Away!\n\n";

    std::cin >> answer;

    //conditional for attempting to take the wand. if random number is greater or equal to 10 then you take it successfully.
    // if not taken successfully it changes answer to b which is the fight sequence.
    if(answer == 'a' || answer == 'A'){
        std::cout << "You attempt to sneakily take the wand";
        if(std::rand() % 20 >= 10){
            std::cout << ", and were able to take the wand without waking him!\n";
            cont = true;
        } else {
            std::cout << ", but have waken up Noke!\n";
            answer = 'b';
        }
    }

    //fight conditional. 
    if(answer == 'b' || answer == 'B'){

        //while loop to verify orc is allive before fighting happens
        while(nokesHealth >= 0) {
            if(playerHealth >= 0){
                int nokesAttack = std::rand() % 12 + 1;
                int playerAttack = std::rand() % 14 + 1;
                nokesHealth -= playerAttack;
                std::cout << "You swing at Noke and inflict " << playerAttack << " damage\n";
                if(nokesAttack >= 0){
                    playerHealth -= nokesAttack;
                    std::cout << "Noke uses his wand of lightning and inflicts " << nokesAttack << " damage\n";
                }
            } else {
                std::cout << "You are paralyzed by Nokes lighting and he turns you into a sheep similar to Shinebright!\n";
                break;
            }
        }
        if(nokesHealth <= 0){
            cont = true;
            std::cout << "\nNoke faints and you take the wand!\n";
        }
    }

    if(answer == 'c' || answer == 'C'){
        std::cout << "You leave Shinebright to attempt to deal with Noke on his own\n";

    }

    if (!cont) {
        std::cout << "\n Game Over! \n";
        return 0;
    }
    answer = '-';
    cont = false;
    playerHealth = 100;

    std::cout << "\nWith the wand you turn Noke back into his elvin form.\n"
              << "He rewardss you with the magic gear from Nokes collection\n";
    std::cout << "\n Game Over! \n";


}

