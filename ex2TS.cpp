#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
setlocale(LC_ALL, "portuguese");
    string input;
    int count = 0;

    cout << "Informe uma string: ";
    getline(cin, input);

    for (char c : input) {
        if (c == 'a' || c == 'A') {
            count++;
        }
    }

    cout << "A letra 'a' aparece " << count << " vezes na string." << endl;

    return 0;
}

