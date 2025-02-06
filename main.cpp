// Rock, Paper, Scissor
/* Rules
- Rock vs Scissor -> Rock wins
- Rock vs Paper -> Paper wins
- Paper vs Scissor -> Scissor wins
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "C:\Users\noc-user.SYSTEM\Desktop\game\functions\functions.h"


int main() {
    const std::vector<std::string> GAME_OPTIONS = {"Rock", "Paper", "Scissor"};
    std::string player1;
    std::string player2;
    std::string player1Selection;
    std::string player2Selection;

    char playAgain = 'y';

    if (GameMode() == 1) {
        Welcome();                                      // Clear screen and output Rock--Paper--Scissor
        std::cout << "*****************************Single Player*****************************" << std::endl;
        std::cout << "Enter player1 name: ";
        std::cin >> player1;
        player2 = "Computer";

        while (playAgain != 'e') {
            Welcome();                                  // Clear screen output Rock--Paper--Scissor
            PlayerList(player1, player2);               // Output Single player if player1 or player2 is Computer

            std::cout << "-- " << player1 << " --" << std::endl;
            player1Selection = PlayGame(GAME_OPTIONS);      

            Welcome();                                  // Clear screen output Rock--Paper--Scissor
            PlayerList(player1, player2);               // Output Single player if player1 or player2 is Computer

            
            srand(time(0));
            player2Selection = GAME_OPTIONS.at(rand() % GAME_OPTIONS.size());

            Winner(player1Selection, player1, player2Selection, player2);
            
            std::cout << "Press any key to play again (e to exit): ";
            std::cin >> playAgain;
            
        }
    }
    else {
        Welcome();
        std::cout << "*****************************Multiplayer*****************************" << std::endl;
        std::cout << "Enter player1 name: ";
        std::cin >> player1;
        std::cout << "Enter player2 name: ";
        std::cin >> player2;

        while (playAgain != 'e') {
            Welcome();                                  // Clear screen output Rock--Paper--Scissor
            PlayerList(player1, player2);               // Output Single player if player1 or player2 is Computer

            std::cout << "-- " << player1 << " --" << std::endl;
            player1Selection = PlayGame(GAME_OPTIONS);

            Welcome();                                  // Clear screen output Rock--Paper--Scissor
            PlayerList(player1, player2);               // Output Single player if player1 or player2 is Computer

            std::cout << "-- " << player2 << " --" << std::endl;
            player2Selection = PlayGame(GAME_OPTIONS);

            Winner(player1Selection, player1, player2Selection, player2);
            
            std::cout << "Press any key to play again (e to exit): ";
            std::cin >> playAgain;
            
        }
    } 

    return 0;    
}