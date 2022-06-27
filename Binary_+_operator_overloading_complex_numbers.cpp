#include<iostream>

using namespace std;

class Complex
{
    private:
        float real, img;
    public:
        Complex(){}
        Complex(float x, float y)
        {
            real = x;
            img = y;
        }

        void display()
        {
            cout<<real<<"+i"<<img;
        }

        Complex operator+(Complex obj)
        {
            real += obj.real;
            img += obj.img;
            return *this;
        }

};

int main()
{
    float a, b;
    cout<<"Enter the real and imaginary part for first number:-";
    cin>>a>>b;
    Complex obj1(a,b);
    cout<<"Enter the real and imaginary part for second number:-";
    cin>>a>>b;
    Complex obj2(a,b);
    obj2+obj1;
    obj2.display();
}