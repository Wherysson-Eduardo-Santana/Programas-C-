#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "");
    // Faturamento mensal de cada estado
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    // Total mensal de faturamento
    double total = sp + rj + mg + es + outros;

    // Percentual de representação de cada estado
    double percentual_sp = (sp / total) * 100.0;
    double percentual_rj = (rj / total) * 100.0;
    double percentual_mg = (mg / total) * 100.0;
    double percentual_es = (es / total) * 100.0;
    double percentual_outros = (outros / total) * 100.0;

    // Resultado
    	cout << "Percentual de representação de cada estado no faturamento total mensal:" << endl;
    	cout << "São Paulo: " << percentual_sp << "%" << endl;
    	cout << "Rio de Janeiro: " << percentual_rj << "%" << endl;
    	cout << "Minas Gerais: " << percentual_mg << "%" << endl;
    	cout << "Espirito Santo: " << percentual_es << "%" << endl;
    	cout << "Outros: " << percentual_outros << "%" << endl;

    return 0;
}

