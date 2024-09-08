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
    cout << "Informe um n�mero: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << num << " pertence � sequ�ncia de Fibonacci." << endl;
    } else {
        cout << num << " n�o pertence � sequ�ncia de Fibonacci." << endl;
    }

    return 0;
}

