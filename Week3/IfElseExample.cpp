#include<iostream>

using namespace std;

int main() {
    int floor;
    cout << "Floor: ";
    cin >> floor;

    int actual_floor;

    if (floor > 13) {
        actual_floor = floor - 1;
    }
    else {
        actual_floor = floor;
    }

    cout << "The actual floor is " << actual_floor << endl;
}


