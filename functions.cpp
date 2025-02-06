// Function definitions
#include <iostream>
#include <vector>
#include "functions.h"

// Clear Screen and output Rock--Paper--Scissor
void Welcome() {
    system("cls");
    std::cout << "*****************************Rock--Paper--Scissor*****************************" << std::endl;
}

// Output Single player if any player name is Computer. Otherwise output Multiplayer
void PlayerList(std::string playerX, std::string playerY) {

    if (playerX == "Computer" || playerY == "Computer") {
        std::cout << "*****************************Single Player*****************************" << std::endl;
    }
    else {
        std::cout << "*****************************Multiplayer*****************************" << std::endl;
    }
}

// Output main menu, and return 1 for Single player and 2 for multiplayer
int GameMode() {
    int userInput;

    Welcome();
    std::cout << "Select game mode..." << std::endl;
    std::cout << "1-> Single Player\n";
    std::cout << "2-> Multiplayer\n";
    std::cout << "Enter(1 or 2): ";
    std::cin >> userInput;

    return userInput;
}

// Return Rock, Paper, Scissor based on user selection
std::string PlayGame(std::vector<std::string> gameSelection) {
    int i;
    int userSelection;

    std::cout << "Choose one of the following options: " << std::endl;
    for (i = 0; i < gameSelection.size(); ++i) {
        std::cout << i + 1 << "-> " << gameSelection.at(i) << std::endl;
    }

    std::cout << "Enter(1,2,3): ";
    std::cin >> userSelection;

    return gameSelection.at(userSelection - 1);
}

// Print player name and player selection
void PrintPlay(std::string player1Choice, std::string player1Name, std::string player2Choice, std::string player2Name) {
    std::cout << player1Name << ": " << player1Choice << std::endl;
    std::cout << player2Name << ": " << player2Choice << std::endl;
}

// Output winner
void Winner(std::string player1Choice, std::string player1Name, std::string player2Choice, std::string player2Name) {

    Welcome();
    PlayerList(player1Name, player2Name);
    if (player1Choice == player2Choice) {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << "Result: DRAW" << std::endl; 
    }
    
    else if (player1Choice == "Rock" && player2Choice == "Scissor") {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << player1Name << ": WINS" << std::endl;
    }
    else if (player1Choice == "Scissor" && player2Choice == "Rock") {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << player2Name << ": WINS" << std::endl;
    }
    else if (player1Choice == "Rock" && player2Choice == "Paper") {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << player2Name << ": WINS" << std::endl;
    }
    else if (player1Choice == "Paper" && player2Choice == "Rock") {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << player1Name << ": WINS" << std::endl;
    }
    else if (player1Choice == "Paper" && player2Choice == "Scissor") {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << player2Name << ": WINS" << std::endl;
    }
    else if (player1Choice == "Scissor" && player2Choice == "Paper") {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << player1Name << ": WINS" << std::endl;
    }

    else {
        PrintPlay(player1Choice, player1Name, player2Choice, player2Name);
        std::cout << "Error" << std::endl;
    }

}