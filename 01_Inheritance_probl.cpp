#include <iostream>
using namespace std;

class Vehicle
{
private:
    float Price;
    string Manufacturer;

public:
    // default constructor
    Vehicle()
    {
        // cout << " Defaul constructor" << endl;
    }
    // parameterized constructor
    Vehicle(float &Price, string &Manufacturer)
    {
        this->Price = Price;
        this->Manufacturer = Manufacturer;
    }
    // copy constructor
    Vehicle(Vehicle &v)
    {
        this->Price = v.Price;
        this->Manufacturer = v.Manufacturer;
    }
    // Assignment Operator
    /*
        Similarity: Assignment operator and copy constructor both are used to initialize and object using another object
        Difference:     Assignment                                               Copy Constructor
            1. Value Exiting obj  <-- Another Exiting Obj           1. Value New  Obj <--- Existing obj
            2. Doesn't Create new block of Memory                   2. Take new block of memory
            3. Bitwise operator                                     3. Overloaded constructor
    */
    Vehicle &operator=(Vehicle &t)
    {
        this->Price = t.Price;
        this->Manufacturer = t.Manufacturer;
        return *this;
    }

    void Display_data()
    {
        cout << "Price: " << Price << ",     Manufacturer: " << Manufacturer << endl;
    }
};

class Car : public Vehicle
{
private:
    string color;
    unsigned short int NumberOfSeats;
    string Model;

public:
    // default constructor
    Car()
    {
        // cout << "      -- Default Construct of Car called --" << endl;
    }
    // parameterized constructor
    Car(string col, unsigned short int num, string model, float price, string manufacturer)
    {
        this->color = col;
        this->NumberOfSeats = num;
        this->Model = model;
        Vehicle(price, manufacturer);
    }

    // copy constructor
    Car(Car &C1)
    {
        this->color = C1.color;
        this->NumberOfSeats = C1.NumberOfSeats;
        this->Model = C1.Model;
        Vehicle V = C1;
    }
    // Assignment Operator
    /*
        Similarity: Assignment operator and copy constructor both are used to initialize and object using another object
        Difference:     Assignment                                               Copy Constructor
            1. Value Exiting obj  <-- Another Exiting Obj           1. Value New  Obj <--- Existing obj
            2. Doesn't Create new block of Memory                   2. Take new block of memory
            3. Bitwise operator                                     3. Overloaded constructor
    */
    Car &operator=(Car &t)
    {
        this->color = t.color;
        this->NumberOfSeats = t.NumberOfSeats;
        this->Model = t.Model;
        Vehicle V = t;
        return *this;
    }

    void Display_data()
    {
        cout << "Color: " << this->color << ",  NumberOfSeats: " << this->NumberOfSeats << ", Model : " << this->Model << ", ";
        Vehicle::Display_data();
    }
};

int main()
{
    // //parameterized constructor
    // cout<<"             -- parameterized constructor --"<<endl;
    // float p = 10.88;
    // string c = "name";
    // Vehicle v(p,c);
    // v.Display_data();

    // //copy constructor
    // cout<<"             -- copy constructor --"<<endl;
    // Vehicle V = v;
    // V.Display_data();

    // //assignment operator
    // cout<<"             -- Assignment Operator --"<<endl;
    // float p1 = 9.03;
    // string name1 = "company";
    // cout<<"             -- before --"<<endl;
    // Vehicle V1(p1, name1);
    // V1.Display_data();

    // cout<<"             -- after --"<<endl;
    // V1 = v;
    // V1.Display_data();

    string color = "white";
    unsigned short int n = 3;
    string model = "CD1245";
    float p = 10.88;
    string name = "TATA";
    Car C(color, n, model, p, name);
    C.Display_data();

    // copy constructor
    cout << "             -- copy constructor --" << endl;
    Car C1 = C;
    C1.Display_data();

    // assignment operator
    cout << "             -- Assignment Operator --" << endl;
    cout << "             -- before --" << endl;
    color = "RED";
    n = 5;
    model = "CD124005";
    p = 586.3;
    name = "SAFARI";
    Car C2(color, n, model, p, name);
    C2.Display_data();

    cout<<"             -- after --"<<endl;
    C2 = C;
    C.Display_data();
    return 0;
}