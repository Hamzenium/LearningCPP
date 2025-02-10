#include <iostream>
#include <string>
using namespace std;


int main()
{
string greeting ="Hello";
cout << greeting.length();
cout << greeting[0] << endl;
cout << greeting.find("llo") << endl;

string name;
cout << "enter your name: ";
cin >> name;

int luckyNumbers[] = {1,2,3,4};
luckyNumbers[0] = 5;


return 0;
}