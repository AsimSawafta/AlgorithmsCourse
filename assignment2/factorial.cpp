#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a the value: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative value.\n";
    } else {
    
        cout << "Factorial of " << num << " : " << factorial(num) << endl;
    }

    return 0;
}