/*
Thanks for all the help, ChessMaster
A palindrome is a word, number or any sequence of characters that read the same regardless if being read forwards or backwards.
Insert something to check whether or not it's a palindrome.
*/
#include <iostream>
#include <string>

std::string askInput() {
    std::string userInput = "";
    std::cin >> userInput;
    return userInput;
}

//Stores the input in reverse order
std::string palindrome(std::string input) {
    std::string reverse = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        reverse += input[i];
    }
    return reverse;
}

std::string toLower(std::string input) {
    std::string output = "";
    //this will iterate every character in the temporary input variable
    for (char c : input) {
        /*the difference between lowercase and uppcase in ASCII is 32
        adding 32 to the uppercase letters will therefore convert it to lowercase
        */
        if (c >= 'A' && c <= 'Z') {
            output += c + 32;
        }
        else {
            output += c;
        };
    };
    return output;
}

void result(std::string reverse, std::string userInput) {
    if (reverse == userInput) {
        std::cout << "Your input is a palindrome\n";
    }
    else {
        std::cout <<"Your input isn't a palindrome\n";
    };
}

bool runAgain() {
    std::string userResponse = "";
    std::cout << "\nDo you want to enter another word? (y/n): ";
    std::cin >> userResponse;
    return userResponse == "y" ? true : false;
}

int main() {
    std::string userInput = askInput();
    std::string reverse = palindrome(userInput);

    userInput = toLower(userInput);
    reverse = toLower(reverse);

    result(reverse, userInput);
    return 0;
}