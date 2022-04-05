/*
Generate Card
Pawelski
4/5/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    srand(time(0));
    int suit, face;
    suit = rand() % 4;
    face = rand() % 13;
    std::string card = "";
    switch (face)
    {
    case 0:
        card += "Ace";
        break;
    case 1:
        card += "Two";
        break;
    case 2:
        card += "Three";
        break;
    case 3:
        card += "Four";
        break;
    case 4:
        card += "Five";
        break;
    case 5:
        card += "Six";
        break;
    case 6:
        card += "Seven";
        break;
    case 7:
        card += "Eight";
        break;
    case 8:
        card += "Nine";
        break;
    case 9:
        card += "Ten";
        break;
    case 10:
        card += "Jack";
        break;
    case 11:
        card += "Queen";
        break;
    case 12:
        card += "King";
        break;
    }

    switch (suit)
    {
    case 0:
        card += " of Clubs";
        break;
    case 1:
        card += " of Spades";
        break;
    case 2:
        card += " of Hearts";
        break;
    case 3:
        card += " of Diamonds";
        break;
    }

    std::cout << "Your card is the " << card << ".\n";
    return 0;
}
