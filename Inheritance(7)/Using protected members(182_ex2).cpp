//ex_2
//The following program illustrates what occurs when protected members are inherited as public:
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
class derived : public base
{
    int c;
public :
    void setc (int n)
    {
        c = n;
    }
// this function has access to a and b from base
    void showbc ()
    {
        cout << a << ' ' << b << ' ' << c << '\n';
    }
};
int main ()
{
    derived ob;
    /*
    a and b are not accessible here because they are
    private to both base and derived .
    */
    ob. setab (1, 2);
    ob. setc (3) ;
    ob. showbc ();
    return 0;
}
/*
Because a and b are protected in base and inherited as public by derived, they are
available for use by member functions of derived. However, outside of these two classes,
a and b are eectively private and inaccessible.*/
