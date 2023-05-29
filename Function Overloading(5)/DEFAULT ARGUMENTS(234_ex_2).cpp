/*EX-2
To understand how default arguments are related to function overloading, rst consider the next program, which overloads the function called rect area().
This function returns the area of a rectangle.*/
// Compute area of a rectangle using overloaded functions .
# include <iostream >
using namespace std;
// Return area of a non - square rectangle .
double rect_area ( double length, double width )
{
    return length * width ;
}
// Return area of a square
double rect_area ( double length )
{
    return length * length ;
}
int main ()
{
    cout << "10 x 5.8 rectangle has area : ";
    cout << rect_area (10.0, 5.8) << '\n';
    cout << "10 x 10 square has area : ";
    cout << rect_area (10.0) << '\n';
    return 0;
}
