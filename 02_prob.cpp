#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    string name;
    unsigned short int age;
    bool gender;
};

class student : public base
{
private:
    string department;
    unsigned short int year;

public:
    student(string name, unsigned short int age, bool gender, string department, unsigned short int year)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->department = department;
        this->year = year;
    }
    void display()
    {
        char g;
        if (this->gender == 0)
        {
            g = 'M';
        }
        else
        {
            g = 'F';
        }
        cout << this->name << ", " << this->age << ", " << g << ", " << this->department << ", " << this->year << endl;
    }
};

class clerk : public base
{
private:
    int workload;
    float salary;

public:
    clerk(string name, unsigned short int age, bool gender, int workload, float salary)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->workload = workload;
        this->salary = salary;
    }
    void display()
    {
        char g;
        if (this->gender == 0)
        {
            g = 'M';
        }
        else
        {
            g = 'F';
        }
        cout << this->name << ", " << this->age << ", " << g << ", " << this->workload << ", " << this->salary << endl;
    }
};

class professor : public base
{
private:
    string department;
    int courseload;
    float salary;

public:
    professor(string name, unsigned short int age, bool gender, string department, int courseload, float salary)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->department = department;
        this->courseload = courseload;
        this->salary = salary;
    }
    void display()
    {
        char g;
        if (this->gender == 0)
        {
            g = 'M';
        }
        else
        {
            g = 'F';
        }
        cout << this->name << ", " << this->age << ", " << g << ", " << this->department << ", " << this->courseload << ", " << this->salary << endl;
    }
};

int main()
{
    string name;
    unsigned short int age;
    bool gender;
    string department;
    unsigned short int year;
    cout << "             -- Student Class --" << endl;
    cout << "name = ";
    cin >> name;
    cout << "age = ";
    cin >> age;
    cout << "gender = ";
    cin >> gender;
    cout << "department = ";
    cin >> department;
    cout << "year = ";
    cin >> year;

    student s(name, age, gender, department, year);
    s.display();

    int workload;
    float salary;
    cout << "             -- clerk Class --" << endl;
    cout << "name = ";
    cin >> name;
    cout << "age = ";
    cin >> age;
    cout << "gender = ";
    cin >> gender;
    cout << "workload = ";
    cin >> workload;
    cout << "salary = ";
    cin >> salary;

    clerk K(name, age, gender, workload, salary);
    K.display();

    int courseload;
    cout << "             -- Professor Class --" << endl;
    cout << "name = ";
    cin >> name;
    cout << "age = ";
    cin >> age;
    cout << "gender = ";
    cin >> gender;
    cout << "department = ";
    cin >> department;
    cout << "courseload = ";
    cin >> courseload;
    cout<<"salary = ";
    cin>>salary;

    professor p(name, age, gender, department, courseload, salary);
    p.display();
    return 0;
}