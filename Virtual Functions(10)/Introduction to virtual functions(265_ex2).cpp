//ex_2
/*Virtual functions are hierarchical in order of inheritance. Further, when a derived class
does not override a virtual function, the function dened within its base class is used. For
example, here is a slightly dierent version of the preceding program:*/
// Virtual functions are hierarchical .
# include <iostream >
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
// derived2 does not override func ()
};
int main ()
{
base *p;
base ob (10) ;
derived1 d_ob1 (10) ;
derived2 d_ob2 (10) ;
p = &ob;
p-> func (); // use base 's func ()
p = & d_ob1 ;
p-> func (); // use derived1 's func ()
p = & d_ob2 ;
p-> func (); // use base 's func ()
return 0;
}
