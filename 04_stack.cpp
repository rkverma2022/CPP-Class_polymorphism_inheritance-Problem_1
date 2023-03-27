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

class shapestack
{

private:
    int top = -1;
    float S[100];

public:
    shapestack()
    {
        cout << "          --- STACK ---" << endl;
    }
    void push(float A)
    {
        this->top += 1;
        this->S[this->top] = A;
    }
    void pop()
    {
        cout << this->S[this->top] << endl;
        this->top--;
    }
    void display()
    {
        int n = this->top;
        if (this->top == -1)
            return;
        for (int i = 0; i < n; i++)
        {
            cout << this->S[this->top] << endl;
        }
    }
};

int main()
{

    shapestack S;
    int n;

    int count = 0;

    while (true)
    {
        count++;
        cout << "    --- Push Triangle --- = " << count << endl;
        bool flag;
        cout << "1. Push Again 0. Stop pushing triangle" << endl;
        cin >> flag;
        if (!flag)
        {
            break;
        }
        float A;
        float a;
        float b;
        float c;
        cout << " Trinagle " << count << endl;
        cout << "side a = " << endl;
        cin >> a;
        cout << "side b = ";
        cin >> b;
        cout << "side c = ";
        cin >> c;

        triangle T(a, b, c);
        A = T.area();

        S.push(A);
    }

    count = 0;
    while (true)
    {
        count++;
        cout << "    --- Push Rectangle --- = " << count << endl;
        bool flag;
        cout << "1. Push Again 0. Stop pushing Rectangle" << endl;
        cin >> flag;
        if (!flag)
        {
            break;
        }
        float A;
        float a;
        float b;
        cout << " Rectangle " << count << endl;
        cout << "side a = ";
        cin >> a;
        cout << "side b = ";
        cin >> b;

        Rectangle rec(a, b);
        A = rec.area();

        S.push(A);
    }

    count = 0;
    while (true)
    {
        count++;
        cout << "    --- Push Circle --- = " << count << endl;
        bool flag;
        cout << "1. Push Again 0. Stop pushing Circle" << endl;
        cin >> flag;
        if (!flag)
        {
            break;
        }
        float A;
        float r;
        cout << " Circle " << count << endl;
        cout<<"radius = ";
        cin>>r;

        circle C(r);
        A = C.area();

        S.push(A);
    }

    bool flag;
    while (true)
    {
        cout << "Do you want to PoP" << endl;
        bool flag;
        cin >> flag;
        if (!flag)
        {
            break;
        }
        S.pop();
    }

    cout << "---------- Display the  Stack --" << endl;
    S.display();

    return 0;
}