#include <iostream>
#include <string>
#include <cctype>

bool isValidCard(const std::string &cardnumber);
void cardtype(const std::string &cardnumber);
void userprompts();
int main()
{
    int option;

    while (true)
    {
        system("cls");
        std::string cardnumber;
        std::cout << "Hello Enter Your Your Card Number:";
        std::cin >> cardnumber;
        std::cin.ignore();
        if (isValidCard(cardnumber))
        {
            std::cout << "The Credit Card Is Valid" << std::endl;
            cardtype(cardnumber);
            std::cout << std::endl;
            userprompts();
            std::cin >> option;
            if (2 == option)
            {

                break;
            }
        }
        else
        {
            std::cout << "invalid Credit Card" << std::endl;
            userprompts();
            std::cin >> option;
            if (2 == option)
            {

                break;
            }
        }
    }
    system("cls");
    std::cout << "Thank You For Validating Your Credit Card Let's Hope You Got The Best Experience.\nExiting Program...";
    system("pause>0");
}
void userprompts()
{

    std::cout << "Would You Like To Test Again?\n1. Yes\n2. No\n Enter option:";
}
bool isValidCard(const std::string &cardnumber)
{
    bool doubledigit = false;
    int sum = 0;
    for (int i = (cardnumber.size() - 1); i >= 0; --i)
    {
        char number = cardnumber[i];
        if (!std::isdigit(number))
        {
            std::cout << "The Character " << number << " Is Not A Valid For Credit Card Representation" << std::endl;
            return false;
        }

        int digit = (number - '0');
        if (doubledigit)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
            sum += digit;
        }
        else
        {
            sum += digit;
        }
        doubledigit = !doubledigit;
    }
    return ((sum % 10) == 0);
};
void cardtype(const std::string &cardnumber)

{
    int digit = cardnumber[0] - '0';
    switch (digit)
    {
    case 1:
        std::cout << "The Card Type Is: Airlines" << std::endl;
        break;
    case 2:
        std::cout << "The Card Type Is: Mastercard" << std::endl;
        break;
    case 3:
        std::cout << "The Card Type Is: American Express" << std::endl;
        break;
    case 4:
        std::cout << "The Card Type Is: VISA" << std::endl;
        break;
    case 5:
        std::cout << "The Card Type Is: Mastercard" << std::endl;
        break;
    case 6:
        std::cout << "The Card Type Is: Discover" << std::endl;
        break;

    default:
        std::cout << "The Card Type Is: Unknown" << std::endl;
        break;
    }
};