#include <iostream>
#include <limits> // for std::numeric_limits

int main()
{
    double num1, num2, result;
    char operation;

    while (true) // Loop until valid operation entered
    {
        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
        {
            break; // Exit the loop when valid operation entered
        }
        else
        {
            std::cout << "Invalid operation. Please enter one of the following: +, -, *, /" << std::endl;
            // Clear input buffer to avoid infinite loop
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    while (true) // Loop until valid numbers entered
    {
        std::cout << "Enter number 1: ";
        if (std::cin >> num1)
        {
            break; // Exit the loop when valid number entered
        }
        else
        {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            // Clear input buffer to avoid infinite loop
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    while (true) // Loop until valid numbers entered
    {
        std::cout << "Enter number 2: ";
        if (std::cin >> num2)
        {
            break; // Exit the loop when valid number entered
        }
        else
        {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            // Clear input buffer to avoid infinite loop
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 1; // Exiting the program
        }
        break;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}
