/*ex_1
Given the following skeleton, ll in the constructor function for myderived. Have it pass
along a pointer to an initialization string to mybase. Also, have myderived() initialize
len to the length of the string.*/
# include <iostream >
# include <cstring >
using namespace std;
class mybase
{
    char str[80];
public :
    mybase(char *s)
    {
        strcpy(str, s);
    }
    char *get()
    {
        return str ;
    }
};
class myderived : public mybase
{
    int len ;
public :
// add myderived () here
    int getlen()
    {
        return len;
    }
    void show()
    {
        cout <<get() <<'\n';
    }
};
int main()
{
    myderived ob(" hello ");
    ob.show();
    cout <<ob.getlen() <<'\n';
    return 0;
}
