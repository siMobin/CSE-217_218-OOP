/*EX-4
when a dynamic array of that class will be allocated. As you should recall from
the preceding chapter, a dynamic array cannot be initialized. Thus, if the class contains
a constructor that takes an initializer, you must include an overloaded version that takes
no initializer.*/

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
    myclass *p;
    myclass ob (10) ; // initialize single variable
    p = new myclass [10]; // can 't use initializers here
    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }
    int i;
// initialize all elements to ob
    for (i=0; i <10; i++)
        p[i] = ob;
    for (i=0; i <10; i++)
    {
        cout << "p[" << i << "]: " << p[i]. getx ();
        cout << '\n';
    }
    return 0;
}
