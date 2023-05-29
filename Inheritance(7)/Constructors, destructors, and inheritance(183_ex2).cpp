//ex_2
//This program shows how to pass an argument to a derived class's constructor:
# include <iostream >
using namespace std;
class base
{
public :
    base ()
    {
        cout << " Constructing base class \n";
    }
    ~ base ()
    {
        cout << " Destructing base class \n";
    }
};
class derived : public base
{
    int j;
public :
    derived (int n)
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
    o. showj ();
    return 0;
}
//Notice that the argument is passed to the derived class's constructor in the normal fashion.
