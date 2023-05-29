/*EX_1
In the following program, arraytype declares an array of ve integers. Its constructor
function initializes each member of the array. The overloaded operator[ ]() function
returns the value of the element specied by its parameter.*/
# include <iostream >
using namespace std;
const int SIZE = 5;
class arraytype
{
    int a[ SIZE ];
public :
    arraytype ()
    {
        int i;
        for (i=0; i< SIZE ; i++)
            a[i] = i;
    }
    int operator []( int i)
    {
        return a[i];
    }
};
int main ()
{
    arraytype ob;
    int i;
    for (i=0; i< SIZE ; i++)
        cout << ob[i] << " ";
    return 0;
}
