//EX-1
// This program contains an ambiguity error .
# include <iostream >
using namespace std;
float f( float i)
{
    return i / 2.0;
}
double f( double i)
{
    return i / 3.0;
}
int main ()
{
    float x = 10.09;
    double y = 10.09;
    cout << f(x); // unambiguous - use f( float )
    cout << f(y); // unambiguous - use f( double )
    cout << f (10) ; // ambiguous , convert 10 to double or
    float ??
    return 0;
}

//EX_2
/*Here is another example of function overloading that is not ambiguous in and of itself.
However, when this function is called with the wrong type of argument, C++'s automatic
conversion rules cause an ambiguous situation,*/
// This program is ambiguous .
# include <iostream >
using namespace std;
void f( unsigned char c)
{
    cout << c;
}
void f( char c)
{
    cout << c;
}
int main ()
{
    f('c');
    f (86) ; // which f() is called ???
    return 0;
}
