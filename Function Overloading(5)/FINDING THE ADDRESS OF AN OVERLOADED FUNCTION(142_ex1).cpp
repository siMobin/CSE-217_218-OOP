/*EX_1
Here is a program that contains two versions of a function called space(). The rst
version outputs count number of spaces to the screen. The second version outputs count
number of whatever type of character is passed to ch. In main(), two function pointers
are declared.The rst one is specied as a pointer to a function having only one integer
parameter. The second is declared as a pointer to a function taking two parameters.*/
/*
Illustrate assigning function pointers to
overloaded functions .
*/
# include <iostream >
using namespace std;
// Output count number of spaces .
void space (int count )
{
    for ( ; count ; count --)
        cout << ' ';
}
// Output count number of chs .
void space (int count, char ch)
{
    for ( ; count ; count --)
        cout << ch;
}
int main ()
{
    /*
    Create a pointer to void function with
    one int parameter
    */
    void (* fp1 )(int );
    /*
    Create a pointer to void function with
    one int parameter and one character parameter .
    */
    void (* fp2 )(int, char );
    fp1 = space ; // gets address of space (int)
    fp2 = space ; // gets address of space (int , char )
    fp1 (22) ; // output 22 spaces
    cout << "|\n";
    fp2 (30, 'x');  // output 30 x's
    cout << "|\n";
    return 0;
}
