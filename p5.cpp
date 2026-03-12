#include <iostream>

using namespace std;



class Vehicle {
	public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};


class Car :
 public Vehicle
  {
	public:
    void startEngine()
	{
        cout << "Car engine started" << endl;
    }

    void drive() 
	{
        cout << "Car is Ready to Roll" << endl;
    }
};


class Bike : public Vehicle {
public:
    void startEngine() 
	{
        cout << "Bike engine started" << endl;
    }

    void drive()
	 {
        cout << "Bike is Ready to Roll" << endl;
    }
};

int main() 
{
    Vehicle* v[2];

    Car c;
    Bike b;

    v[0] = &c;
    v[1] = &b;

    for(int i = 0; i < 2; i++)
	 {
        v[i]->startEngine();
        v[i]->drive();
    }

    return 0;
}
