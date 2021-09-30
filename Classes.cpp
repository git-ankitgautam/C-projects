#include<iostream>

class demo 
{
    private:
    int x, y;

    public:
    void read_data();
    void show_data();
};

int main()
{
    demo D1;
    D1.read_data();
    D1.show_data();

    return 0;   
}

void demo::show_data()
{
    std::cout<<"X is"<<x;
    std::cout<<"\ny is"<<y;

}

void demo::read_data()
{
    std::cout<<"Enter x =";
    std::cin>>x;
    std::cout<<"Enter y =";
    std::cin>>y;
}