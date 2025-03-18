#include <iostream>
#include <string>
#include <thread>

using namespace std;

int main() {
    string message = "My name is Hamza";
    thread thr([message]() {  // Capture message by value
        cout << "Hello " << message << endl;
    });
    thr.join();  // Join the thread
    return 0;
}
