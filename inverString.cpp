#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
    string str;
    cout << "Digite uma string: ";
    getline(cin, str);

    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }

    cout << "String invertida: " << str << endl;

    return 0;
}

