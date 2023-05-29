//ex_1
//Here is an improved version of the program shown in Example 4 in the predeing section.
//In this version, the function getarea() is declared as pure in the base class area.
// Create an abstract class
# include <iostream >
using namespace std;
class area
{
double dim1 , dim2 ; // dimensions of figure
public :
void setarea ( double d1 , double d2)
{
dim1 = d1;
dim2 = d2;
}
void getdim ( double &d1 , double &d2)
{
d1 = dim1 ;
d2 = dim2 ;
}
virtual double getarea () = 0; // pure virtual function
};
class rectangle : public area
{
public :
double getarea ()
{
double d1 , d2;
getdim (d1 , d2);
return d1 * d2;
}
};
class triangle : public area
{
public :
double getarea ()
{
double d1 , d2;
getdim (d1 , d2);
return 0.5 * d1 * d2;
}
};
int main ()
{
area *p;
rectangle r;
triangle t;
r. setarea (3.3 , 4.5) ;
t. setarea (4.0 , 5.0) ;
p = &r;
cout << " Rectangle has area : " << p-> getarea () << '\n';
p = &t;
cout << " Triangle has area : " << p-> getarea () << '\n';
return 0;
}
