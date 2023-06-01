#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(int num) const
    {
        Complex result;
        result.real = real + num;
        result.imag = imag;
        return result;
    }

    friend Complex operator+(int num, const Complex& ob)
    {
        Complex result;
        result.real = ob.getReal() + num;
        result.imag = ob.getImag();
        return result;
    }

    bool operator==(const Complex& other) const
    {
        return (real == other.real) && (imag == other.imag);
    }

    int getReal() const
    {
        return real;
    }

    int getImag() const
    {
        return imag;
    }
};

int main()
{
    Complex a(2, 3);
    Complex b;

    // Testing overloaded + operator
    b = a + 5;
    cout << "b = a + 5: " << b.getReal() << " + " << b.getImag() << "i" << endl;

    b = 10 + a;
    cout<< "b = 10 + a: " << b.getReal() << " + " << b.getImag() << "i" <<endl;

    // Testing overloaded == operator
    Complex c(2, 3);
    Complex d(4, 5);

    if (a == c)
        cout << "a and c are equal." <<endl;
    else
        cout << "a and c are not equal." <<endl;

    if (a == d)
        cout << "a and d are equal." <<endl;
    else
        cout << "a and d are not equal." <<endl;

    return 0;
}
