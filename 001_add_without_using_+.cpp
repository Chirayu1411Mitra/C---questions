#include <iostream>
using namespace std;
int add(int a, int b)
{
    for (int i = 1; i <= b; i++)
    {
        a++;
    }
    return a;
}
int main()
{
    int num1;
    int num2;
    cout << "Enter the value of a =";
    cin >> num1;
    cout << "Enter the value of b =";
    cin >> num2;
    int a = add(num1, num2);
    cout << a;
    return 0;
}
