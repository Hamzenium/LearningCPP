#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex cout_mutex; // Mutex for thread-safe output

void playFizzBuzz(int n) {
    string players[4] = {"Abdul", "Bart", "Claudia", "Divya"}; // Using an array instead of vector
    int num_players = 4;

    for (int i = 1; i <= n; ++i) {
        string output;

        if (i % 3 == 0 && i % 5 == 0) {
            output = "fizzbuzz!";
        } else if (i % 3 == 0) {
            output = "fizz!";
        } else if (i % 5 == 0) {
            output = "buzz!";
        } else {
            output = to_string(i);
        }

        {
            lock_guard<mutex> lock(cout_mutex); // Ensures safe console output
            cout << players[(i - 1) % num_players] << " says " << output << endl;
        }

        this_thread::sleep_for(chrono::milliseconds(200)); // Simulate real-time output
    }
}

int main() {
    int n = 20; // Number of turns

    // Start the FizzBuzz function in a separate thread
    thread fizzBuzzThread(playFizzBuzz, n);

    // Wait for the thread to complete execution
    fizzBuzzThread.join();

    return 0;
}
