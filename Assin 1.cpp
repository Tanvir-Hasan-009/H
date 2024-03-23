#include <iostream>
using namespace std;

float raiseToPow(float, int);

float raiseToPow(float a, int b) {
    if (b >= 0) {
        float result = 1.0;
        for (int i = 1; i <= b; i++) {
            result =result* a;
        }
        return result;
    } else {
        float result = 1.0;
        for (int i = 1; i <= -b; i++) {
            result =result* a; 
        }
        return 1/result; 
    }
}

int main() {
    float c;
    int d;
    cout << "Please enter the number: ";
    cin >> c;
    cout << "Please enter the integer power: ";
    cin >> d;
    cout << c << " raised to power " << d << " is equal to " << raiseToPow(c, d);
    return 0;
}

