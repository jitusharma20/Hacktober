#include <iostream>
using namespace std;
class swapusingfriend   //creating a class swapusing friend
{
private:
    int x, y, temp;
public:
    void input() //void input function
    {
        cout << "Enter two numbers:" << endl;
        cin >> x >> y;
    }
    friend void swap(swapusingfriend &t);             //friend function
    void display()
    {
        cout << "After swapping:" << x << " " << y;      //after swapping 
    }
};
void swap(swapusingfriend &t) //void swap
{
    t.temp = t.x;
    t.x = t.y;
    t.y = t.temp;
}

int main()
{
    swapusingfriend f;                      //main function
    f.input();
    swap(f);
    f.display();
    return 0;
}
