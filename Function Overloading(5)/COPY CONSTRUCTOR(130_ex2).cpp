/*EX_2
This program uses a copy constructor to allow strtype
objects
to be passed to functions .
*/
# include <iostream >
# include <cstring >
# include <cstdlib >
using namespace std;
class strtype
{
    char *p;
public :
    strtype ( char *s); // constructor
    strtype ( const strtype &o); // copy constructor
    ~ strtype ()
    {
        delete [] p;    // destructor
    }
    char *get ()
    {
        return p;
    }
};
// " Normal " constructor
strtype :: strtype ( char *s)
{
    int l;
    l = strlen (s)+1;
    p = new char [l];
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    strcpy (p, s);
}
// Copy constructor
strtype :: strtype ( const strtype &o)
{
    int l;
    l = strlen (o.p)+1;
    p = new char [l]; // allocate memory for new copy
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    strcpy (p, o.p); // copy string into copy
}
void show ( strtype x)
{
    char *s;
    s = x.get ();
    cout << s << "\n";
}
int main ()
{
    strtype a(" Hello "), b(" There ");
    show (a);
    show (b);
    return 0;
}
