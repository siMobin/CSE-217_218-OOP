/*ex_3
In the following example, both the derived class and the base class constructors take
arguments. In this specic case, both use the same argument, and the derived class
simply passes along the argument to the base.*/
# include <iostream >
using namespace std;
class base
{
    int i;
public :
    base (int n)
    {
        cout << " Constructing base class \n";
        i = n;
    }
    ~ base ()
    {
        cout << " Destructing base class \n";
    }
    void showi ()
    {
        cout << i << '\n';
    }
};
class derived : public base
{
    int j;
public :
    derived (int n) : base (n) // pass arg to base class .
    {
        cout << " Constructing derived class \n";
        j = n;
    }
    ~ derived ()
    {
        cout << " Destructing derived class \n";
    }
    void showj ()
    {
        cout << j << '\n';
    }
};
int main ()
{
    derived o (10) ;
    o. showi ();
    o. showj ();
    return 0;
}
/*
Pay special attention to the declaration of derived's constructor. Notice how the param-
eter n (which receives the initialization argument) is both used by derived() and passed
to base().*/
