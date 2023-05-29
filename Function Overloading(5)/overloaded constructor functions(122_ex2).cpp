/*EX-1
.............*/
# include <iostream >
using namespace std;
class myclass
{
    int x;
public :
// overload constructor two ways
    myclass ()
    {
        x = 0;    // no initializer
    }
    myclass (int n)
    {
        x = n;    // initializer
    }
    int getx ()
    {
        return x;
    }
};
int main ()
{
    myclass o1 [10]; // declare array without initializers
// declare without initializer
    myclass o2 [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for (i=0; i <10; i++)
    {
        cout << "o1[" << i << "]: " << o1[i]. getx ();
        cout << '\n';
        cout << "o2[" << i << "]: " << o2[i]. getx ();
        cout << '\n';
    }
    return 0;
}
