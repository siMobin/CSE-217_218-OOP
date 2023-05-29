/*ex_4
In most cases, the constructor functions for the base and derived classes will not use the
same argument. When this is the case and you need to pass one or more arguments
to each, you must pass to the derived class's constructor all arguments needed by both
the derived class and the base class. Then the derived class simply passes along to the
base those arguments required by it. For example, this program shows how to pass an
argument to the derived class's constructor and another one to the base class:*/
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
    derived (int n, int m) : base (m) // pass arg to base class
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
    derived o(10, 20) ;
    o. showi ();
    o. showj ();
    return 0;
}
