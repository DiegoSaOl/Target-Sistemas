#include <iostream>
#include <locale.h>
using namespace std;

bool isFibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n == a or n == b) return true;

    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }

    return (b == n);
}

int main() {
setlocale(LC_ALL, "portuguese");
    int num;
    cout << "Informe um número: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << num << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << num << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}

