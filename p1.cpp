#include<iostream>

using namespace std;

class laptop
{
	private:
	 string Name;
	 float price;
	 string Processor;

	
	public:
	Laptop(string n, float p, string pr)
	{
		Name=n;
		price=p;
		Processor=pr;
	}
	
	void showDetails()
	{
		cout<<"Laptop Name:"<<Name <<endl;
		cout << "Price: " << price << endl;
		cout << "Processor: " << Processor << endl;
	}
};

int main()
{
	
	Laptop 1("ASUS TUF A15", 75000, "AMD Ryzen 7");
    Laptop 2("HP VICTUS", 60000, "Intel i5");
    Laptop 3("Lenovo LOQ", 75000, "AMD Ryzen 7");
	
	
	Laptop 1. showDetails();
    Laptop 2. showDetails();
    Laptop 3. ShowDetails();

	return 0;
}
