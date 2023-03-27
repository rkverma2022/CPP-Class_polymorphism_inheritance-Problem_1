#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class triangle
{
private:
    float a;
    float b;
    float c;

public:
    triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    float area()
    {
        float s = (a + b + c) / 2;
        float A = sqrt(s * (s - a) * (s - b) * (s - c));

        return A;
    }
};

class circle
{
private:
    float r;

public:
    circle(float radius)
    {
        this->r = radius;
    }

    float area()
    {
        float A = M_PI * (pow(r, 2));

        return A;
    }
};

class Rectangle
{
private:
    float w;
    float h;

public:
    Rectangle(float w, float h)
    {
        this->w = w;
        this->h = h;
    }

    float area()
    {
        float A = this->w * this->h;

        return A;
    }
};

int main()
{
    int n;

    cout << "    --- Enter Total Number of Triangle = ";
    cin >> n;

    float A = 0.0;
    for (int i = 0; i < n; i++)
    {
        float a;
        float b;
        float c;
        cout << " Trinagle " << i << endl;
        cout << "side a = ";
        cin >> a;
        cout << "side b = ";
        cin >> b;
        cout << "side c = ";
        cin >> c;

        triangle T(a, b, c);
        A += T.area();
    }

    cout << "    --- Enter Total Number of Rectangle = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float a;
        float b;
        cout << " Rectangle " << i << endl;
        cout << "side a = ";
        cin >> a;
        cout << "side b = ";
        cin >> b;

        Rectangle rec(a, b);
        A += rec.area();

    }

    
    cout << "    --- Enter Total Number of Circle = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float r;
        cout << " circle " << i << endl;
        cout<<"radius = ";
        cin>>r;

        circle C(r);
        A += C.area();

    }

    cout<<"Total Area = "<<A<<endl;

    return 0;
}