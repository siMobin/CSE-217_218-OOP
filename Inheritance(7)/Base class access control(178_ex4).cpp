/*ex_4
As stated, even though public members of a base class become private members of a
derived class when inherited using the private specier, they are still accessible within
the derived class. For example, here is a *xed* version of the preceding program:*/
// This program is fixed .
# include <iostream >
using namespace std;
class base
{
    int x;
public :
    void setx (int n)
    {
        x = n;
    }
    void showx ()
    {
        cout << x << '\n';
    }
};
// Inherit base as private .
class derived : private base
{
    int y;
public :
// setx is accessible from within derived
    void setxy (int n, int m)
    {
        setx (n);
        y = m;
    }
// show is accessible from within derived
    void showxy ()
    {
        showx ();
        cout << y << '\n';
    }
};
int main ()
{
    derived ob;
    ob. setxy (10, 20) ;
    ob. showxy ();
    return 0;
}
/*
In this case, the functions setx() and showx() are accessed inside the derived class, which
is perfectly legal because they are private members of that class.*/
