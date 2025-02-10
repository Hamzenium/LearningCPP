#include <iostream>
#include <string>
using namespace std;


int main()
{

cout << "Hello" << endl;
cout << "world" ;
cout << "!" << endl;

string name = "mike";
char testGrade = 'A';
short age0 = 10;
int age1 = 20;
cout << &age1 <<endl;

int *pNum = &age1;
cout << *pNum << endl;
cout << pNum << endl;

long age2 = 30;
long long age3 = 40;
float gpa0 = 2.5f;
double gpa1 = 3.5;
long double gpa2 = 3.5;
bool isTall;
isTall = true;
cout << "your name is " << name << endl;
return 0;
}