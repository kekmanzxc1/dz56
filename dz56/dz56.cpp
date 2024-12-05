//Завдання 1 
#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex divide(Complex a, Complex b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

void print(Complex c) {
    cout << c.real << (c.imag >= 0 ? " + " : " - ") << (c.imag >= 0 ? c.imag : -c.imag) << "i" << endl;
}

int main() {
    Complex a = { 3, 4 };
    Complex b = { 1, -2 };

    cout << "Number a: ";
    print(a);

    cout << "Number b: ";
    print(b);

    Complex sum = add(a, b);
    cout << "Add: ";
    print(sum);

    Complex diff = subtract(a, b);
    cout << "Subtract: ";
    print(diff);

    Complex product = multiply(a, b);
    cout << "Multiply: ";
    print(product);

    Complex quotient = divide(a, b);
    cout << "Divide: ";
    print(quotient);
}
