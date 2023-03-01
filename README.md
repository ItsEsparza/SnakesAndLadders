# SnakesAndLadders

This is a C++ program that simulates a snakes and ladders game for two players.

The program defines a class myGame that has some protected variables, including an array mainboard representing the game board, and several integers that store information about the players and the game status. The public methods of the myGame class include a constructor that sets the player number, a variable userInput that stores the player's input (either 'C' to continue the game or 'E' to end it), and a boolean variable gameEnded that is set to true when the game is over. The main() function initializes two instances of the myGame class representing the two players, and starts a loop that alternates between the players' turns until the game is over. At each iteration of the loop, the program prompts the user to enter their input, calls the corresponding start() method, and increments a counter turn that keeps track of the number of turns played. When one of the players reaches the end of the board, the program declares that player as the winner and sets the gameEnded variable to true.

The game turns are showed in the next format = (turn) (player) (current tile) (dice rolled number) (tile type) (new tile)

In the code i used 2 concepts of oop this being:

Classes: The myGame class is defined to encapsulate the game's data and behavior. It contains protected variables and methods that are used to implement the game logic, and public methods that provide an interface for interacting with the game.

Encapsulation: The myGame class encapsulates the game's data and behavior within its own scope. The class's data is protected, so it can only be accessed through its public methods.

The compilation of the code was made in replit this were the steps:
1. Open a new Replit C++ project
2. Click top green button "Run"

Made by Facundo Esparza
