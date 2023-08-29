#include <iostream>
using namespace std;

void appending()
{
    string firstName = "Marconi";
    string lastName = "S. de Jesus";
    string fullName = firstName.append(lastName);
    cout << fullName;
}

void concat()
{
    string firstName = "Marconi";    
    string lastName = "S. de Jesus";
    string fullName = firstName + " " + lastName;
    cout << fullName;
}

void getLength()
{
    string fullName = "Marconi S. de Jesus";
    cout << fullName.length();
}

void getLetter()
{
    string fullName = "Marconi S. de Jesus";
    cout << fullName[0];
}

void spacedName()
{
    string fullName = "Marconi S. de Jesus";

    for (char letter : fullName)
    {
        cout << letter << " ";
    }
}

void reverseName()
{
    string fullName = "Marconi S. de Jesus";
    
    for (int i = fullName.size(); i >= 0; i--)
    {
        cout << fullName[i];
    }
}

void getMultipleValues()
{
    // string fullName;
    // cout << "Type your full name: ";
    // cin >> fullName;
    // cout << fullName;

    string fullName;
    cout << "Enter your name: ";
    getline (cin, fullName);
    cout << fullName;
}


int main(void)
{
    getMultipleValues();
    cout << endl;
}
