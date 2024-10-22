// Question no 1:- Write C++ program to add two integer values and print the output with descriptive message.
#include <iostream>

int main() {
    int num1, num2, sum;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
// Question no 2:- Write C++ program to convert temperature from centigrade to Fahrenheit.
#include <iostream>

int main() {
    float celsius, fahrenheit;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << std::endl;

    return 0;
}
// Question no 3:- Write C++ program to build simple calculator using switch case statement.
#include <iostream>

int main() {
    char operation;
    float num1, num2;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch(operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
    }

    return 0;
}
// Question no:- 4 
#include <iostream>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
// Question no :- 5 Write a program to display the average of three numbers entered by the user by
// creating a class named 'Average' having a function to calculate and display the average.
#include <iostream>

class Average {
public:
    void calculateAverage(float num1, float num2, float num3) {
        float avg = (num1 + num2 + num3) / 3.0; // Calculate the average
        std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << avg << std::endl;
    }
};

int main() {
    Average avgCalculator;

    float number1, number2, number3;

    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    std::cout << "Enter the third number: ";
    std::cin >> number3;

    avgCalculator.calculateAverage(number1, number2, number3);

    return 0;
}
// Question no :- 6 
#include <iostream>

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    void input() {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imag;
    }

    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex multiply(const Complex& other) {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    void display() {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};

int main() {
    Complex num1, num2, result;

    std::cout << "Enter the first complex number:\n";
    num1.input();
    
    std::cout << "Enter the second complex number:\n";
    num2.input();

    result = num1.add(num2);
    std::cout << "\nSum: ";
    result.display();

    result = num1.subtract(num2);
    std::cout << "Difference: ";
    result.display();

    result = num1.multiply(num2);
    std::cout << "Product: ";
    result.display();

    return 0;
}
.