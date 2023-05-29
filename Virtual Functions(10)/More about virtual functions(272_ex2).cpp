//ex_2
// Virtual functions retain their virtual nature when inherited ,

# include <iostream >
using namespace std;
class base
{
public :
virtual void func ()
{
cout << " Using base version of func ()\n";
}
};
class derived1 : public base
{
public :
void func ()
{
cout << " Using derived1 's version of func ()\n";
}
};
// derived2 inherits derived1 .
class derived2 : public derived1
{
public :
void func ()
{
cout << " Using derived2 's version of func ()\n";
}
};
int main ()
{
base *p;
base ob;
derived1 d_ob1 ;
derived2 d_ob2 ;
p = &ob;
p-> func (); // use base 's func ()
p = & d_ob1 ;
p-> func (); // use derived1 's func ()
p = & d_ob2 ;
p-> func (); // use derived2 's func ()
return 0;
}
