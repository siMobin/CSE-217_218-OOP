//ex_2
//Using the following class hierarchy, create C's constructor so that it initializes k and passes on argument to A() and B().
# include <iostream >
using namespace std;
class A
{
int i;
public :
A(int a) { i = a; }
};
class B
{
int j;
public :
B(int a) { j = a; }
};
class C : public A, public B
{
int k;
public :
/*
Create C() so that it initializes k
and passes arguments to both A() and B()
*/
};
