#include <iostream>
using namespace std;

class Animals
{
public:
    virtual void livingArea() = 0;
};

class TerrestrialAnimals :virtual public Animals
{
public:
    void livingArea()
    {
        cout << "Terrestrial animals live on land." << endl;
    }
};

class AquaticAnimals : virtual public Animals
{
public:
    void livingArea()
    {
        cout << "Aquatic animals live in water." << endl;
    }
};

class AmphibianAnimals : private TerrestrialAnimals, protected AquaticAnimals
{
public:
    void livingArea()
    {
        cout << "Amphibian animals live both on land and in water." << endl;
    }
};

int main()
{
    TerrestrialAnimals terrestrialAnimal;
    AquaticAnimals aquaticAnimal;
    AmphibianAnimals amphibianAnimal;

    terrestrialAnimal.livingArea();
    aquaticAnimal.livingArea();
    amphibianAnimal.livingArea();

    return 0;
}
