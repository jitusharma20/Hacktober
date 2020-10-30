#include <iostream>
using namespace std;
inline int CheckLargest(int num1, int num2, int num3)
{
    return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}
int main()
{
    int num1, num2, num3;        //main function
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout<<CheckLargest(num1, num2, num3);
}
