#include <iostream>
using namespace std;
int main()
{
    int age;
    int house;
    cout << "Enter the person's age: ";
    cin >> age;
    cout << "Enter the no. of times they've moved: ";
    cin >> house;

    cout << "Average number of years lived in the same house: " << age / (house + 1);
}