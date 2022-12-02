#include <iostream>
using namespace std;

class complex
{
    float x;
    float y;

public:
    void input(float real, float img)
    {
        x = real;
        y = img;
    }
    friend complex sum(complex, complex);
    friend complex mul(complex, complex);
    void show(complex);
};

complex sum(complex c1, complex c2)
{
    complex c4;
    c4.x = c1.x + c2.x;
    c4.y = c1.y + c2.y;
    return (c4);
}

complex mul(complex c1, complex c2)
{
    complex c3;
    c3.x = (c1.x * c2.x) - (c1.y * c2.y);
    c3.y = (c1.x * c2.y) + (c2.x * c1.y);
    return c3;
}

void complex ::show(complex c)
{
    cout << c.x << " + i" << c.y << "\n";
}

int main()
{
    complex A, B, C, D;

    int n1, n2;
    int m1, m2;
    cin >> n1;
    cin >> n2;
    cin >> m1;
    cin >> m2;

    A.input(n1, n2);
    B.input(m1, m2);

    C = sum(A, B);
    D = mul(A, B);

    cout << "c1= ";
    A.show(A);
    cout << "C2= ";
    B.show(B);
    cout << "Addition = ";
    C.show(C);
    cout << "Multiplication = ";
    D.show(D);

    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1036995697830010901/unknown.png