//ex_1
//This program illustrates how public, private, and protected members of a class can be accessed:
# include <iostream >
using namespace std;
class samp
{
// private by default
    int a;
protected : // still private relative to samp
    int b;
public :
    int c;
    samp (int n, int m)
    {
        a = n;
        b = m;
    }
    int geta ()
    {
        return a;
    }
    int getb ()
    {
        return b;
    }
};
int main ()
{
    samp ob (10, 10) ;
// ob.b = 99; Error ! b is protected and thus private
    ob.c = 30; // OK , c is public
    cout << ob. geta () << ' ';
    cout << ob. getb () << ' ' << ob.c << '\n';
    return 0;
}
//As you can see, the commented-out line is not permissible in main() because b is protected and is thus still private to samp.
