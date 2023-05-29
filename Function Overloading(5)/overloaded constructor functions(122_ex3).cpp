/*EX-3
It overloads the date() constructor two ways. One form accepts the date as a character string. In the other form,the date is passed as three integers.*/
# include <iostream >
# include <cstdio > // included for sscanf ()
using namespace std;
class date
{
    int day, month, year ;
public :
    date ( char *str );
    date (int m, int d, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void show ()
    {
        cout << month << '/' << day << '/';
        cout << year << '\n';
    }
};
date :: date ( char *str )
{
    sscanf (str, "%d%*c%d%*c%d", &month, &day, & year );
}
int main ()
{
// construct date object using string
    date sdate (" 12/31/99 ");
// construct date object using integers
    date idate (12, 31, 99) ;
    sdate . show ();
    idate . show ();
    return 0;
}
