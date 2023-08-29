#include <iostream>
using namespace std;

int getAge()
{
    unsigned short age;
    cout << "Qual a sua idade? ";
    cin >> age;
    return age;
}

int sum(int x, int y)
{
    return x + y;
}

int main(void)
{
    // int age = getAge();
    // cout << "Você possui " << age << " anos de idade" << endl;
    
    double x, y;

    cout << "Escolha um número: ";
    cin >> x;
    cout << "Escolha outro número: ";
    cin >> y;

    cout << "A soma entre " << x << " e " << y << " é " << x + y << endl;
}
