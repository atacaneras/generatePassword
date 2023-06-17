#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

std::string generatePassword(int length)
{
    const std::string lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
    const std::string uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string numbers = "0123456789";
    const std::string specialCharacters = "!$%&?";

    const std::string allCharacters = lowercaseLetters + uppercaseLetters + numbers + specialCharacters;
    const int numAllCharacters = allCharacters.length();

    std::string password;
    password.reserve(length);

    for (int i = 0; i < length; ++i)
    {
        int randomIndex = rand() % numAllCharacters;
        password += allCharacters[randomIndex];
    }

    return password;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    const int lengths[] = { 8, 12, 16, 20, 25 };
    const int numLengths = sizeof(lengths) / sizeof(lengths[0]);

    const int maxLength = 25; // Maximum length among all passwords

    std::cout << std::left; // Align output to the left

    for (int i = 0; i < numLengths; ++i)
    {
        int length = lengths[i];
        std::string password = generatePassword(length);

        std::cout << std::setw(17) << std::left << "Password length is " << std::setw(2) << std::right << length << ": " << password << std::endl;
    }

    return 0;
}
