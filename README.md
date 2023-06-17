# Generate Password

Generate Password is a simple command-line tool written in C++ that generates random passwords of varying lengths. It allows you to specify the desired length of the password and generates a random combination of uppercase and lowercase letters, numbers, and special characters.

## Features

- Generate random passwords with varying lengths
- Includes uppercase and lowercase letters, numbers, and special characters
- Simple and easy-to-use command-line interface

## Usage

1. Make sure you have a C++ compiler installed on your system.
2. Download or clone this repository.
3. Open a command prompt or terminal and navigate to the directory containing the source code.
4. Compile the source code using the following command:
   ```
   g++ -o generatePassword main.cpp
   ```
5. Run the compiled executable:
   ```
   ./generatePassword
   ```
6. Follow the on-screen instructions to generate passwords of different lengths.
7. The generated passwords will be displayed on the console.

## Example

Here's an example output of generating passwords of different lengths:

```
Password Length is 8 : BbP4ZSGW
Password Length is 12 : 3MKw9WMz7lus
Password Length is 16 : CKF4wGWW39HYgTw3
Password Length is 20 : %u4IjyUDKAlewIqYxYNw
Password Length is 24 : zHAsE0PfnAF!cUyI!oiZk6Yv
```

## Customization

You can customize the character sets used to generate the passwords by modifying the `lowercaseLetters`, `uppercaseLetters`, `numbers`, and `specialCharacters` variables in the source code.

```
const std::string lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
const std::string uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const std::string numbers = "0123456789";
const std::string specialCharacters = "!$%&?";
Feel free to modify these character sets to suit your requirements.
```

## License

This project is licensed under the MIT License. See the LICENSE file for details.

Feel free to modify the README.md file according to your specific implementation, additional features, or any other information you want to include.
