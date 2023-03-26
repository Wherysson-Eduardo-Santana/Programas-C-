#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
    int numero, fib1 = 0, fib2 = 1, fib3;
    bool pertence = false;

    cout << "Informe um número: ";
    cin >> numero;

    while (fib2 < numero) {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

        if (fib2 == numero) {
            pertence = true;
            break;
        }
    }

    if (pertence) {
        cout << "O número " << numero << " PERTENCE a sequência de Fibonacci.\n";
    } else {
        cout << "O número " << numero << " NÃO pertence a sequência de Fibonacci.\n";
    }

    return 0;
}

