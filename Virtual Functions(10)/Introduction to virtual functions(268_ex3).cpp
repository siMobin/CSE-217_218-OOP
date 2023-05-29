/*ex_3
The next example shows how a virtual function can respond to random events that occur at
run time. This program selects between d ob1 and d ob2 based upon the value returned
by the standard random number generator rand(). Keep in mind that the version of
func() executed is resolved at run time. (Indeed, it is impossible to resolve the calls to
func() at compile time.)

This example illustrates how a virtual function can be used to respond to random events occurring at run time.
*/
# include <iostream >
# include <cstdlib >
using namespace std;
class base
{
public :
int i;
base (int x) { i = x; }
virtual void func ()
{
cout << " Using base version of func (): ";
cout << i << '\n';
}
};
class derived1 : public base
{
public :
derived1 (int x) : base (x) {}
void func ()
{
cout << " Using derived1 's version of func (): ";
cout << i*i << '\n';
}
};
class derived2 : public base
{
public :
derived2 (int x) : base (x) {}
void func ()
{
cout << " Using derived2 's version of func (): ";
cout << i+i << '\n';
}
};
int main ()
{
base *p;
derived1 d_ob1 (10) ;
derived2 d_ob2 (10) ;
int i, j;
for (i=0; i <10; i++)
{
j = rand ();
if ((j%2) )
p = & d_ob1 ; // if odd use d_ob1
else
p = & d_ob2 ; // if even use d_ob2
p-> func (); // call appropriate function
}
return 0;
}
