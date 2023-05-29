/*ex_3
when a base class is inherited as protected, public and protected
members of the base class become protected members of the derived class. For example,
here the preceding program is changed slightly, inheriting base as protected instead of
public:*/
// This program will not compile .
# include <iostream >
using namespace std;
class base
{
protected : // private to base
    int a, b; // but still accessible by derived
public :
    void setab (int n, int m)
    {
        a = n;
        b = m;
    }
};
class derived : protected base // inherit as protected
{
    int c;
public :
    void setc (int n)
    {
        c = n;
    }
// this function has access to a and b from base
    void showabc ()
    {
        cout << a << ' ' << b << ' ' << c << '\n';
    }
};
int main ()
{
    derived ob;
// ERROR : setab () is now a protected member of base .
    ob. setab (1, 2); // setab () is not accessible here .
    ob. setc (3) ;
    ob. showabc ();
    return 0;
}
/*
As the comments now describe, because base is inherited as protected, its public and
protected elements become protected members of derived and are therefore inaccessible
within main().*/
