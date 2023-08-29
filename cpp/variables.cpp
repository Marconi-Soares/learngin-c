#include <iostream>
using namespace std;


void stringFunc(void)
{
    char myLetter = 'M';
    string myPartialName = "arconi";
    // cout << myLetter << endl;
    // cout << myName << endl;
    cout << myLetter << myPartialName << endl;
    
}

int sum(int x, int y)
{
    int res = x + y;
    return res;
}

int main(void)
{
    // int myNum = 15;
    // cout << myNum << endl;
    // stringFunc();
    cout << sum(1, 3) << endl;
}
