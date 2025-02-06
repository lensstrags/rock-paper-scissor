// Function declaration
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void Welcome();             // Clear screen, and output title
int GameMode();             // Return 1(Single player) | 2(Multiplayer)
std::string PlayGame(std::vector<std::string> gameSelection);      // Return Rock, Paper, or Scissor
void PlayerList(std::string playerX, std::string playerY);         // Output Single player if any player name is Computer. Otherwise output Multiplayer
void Winner(std::string player1Choice, std::string player1Name, std::string player2Choice, std::string player2Name);            // Output winner 
void PrintPlay(std::string player1Choice, std::string player1Name, std::string player2Choice, std::string player2Name);         // Output player name and player selection
#endif