#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
    int faturamento[31] = {500, 800, 0, 600, 700, 0, 1000, 900, 800, 1200, 0, 1500, 1100, 1000, 800, 700, 0, 600, 900, 1100, 1300, 1200, 1000, 800, 700, 600, 0, 800, 900, 1100, 1300}; // Exemplo de vetor de faturamento diário

    
    int menor = faturamento[0], maior = faturamento[0];
    for (int i = 1; i < 31; i++) {
        if (faturamento[i] < menor) {
            menor = faturamento[i];
        }
        if (faturamento[i] > maior) {
            maior = faturamento[i];
        }
    }
    cout << "Menor valor de faturamento diário é de:R$" << menor << " reais"<< endl;
    cout << "Maior valor de faturamento diário é de:R$" << maior << " reais"<< endl;

    
    int dias_com_faturamento = 0, soma_faturamento = 0;
    for (int i = 0; i < 31; i++) {
        if (faturamento[i] != 0) { 
            dias_com_faturamento++;
            soma_faturamento += faturamento[i];
        }
    }
    float media_mensal = soma_faturamento / dias_com_faturamento;
    cout << "Média mensal de faturamento é de:R$"<< media_mensal << " reais" << endl;

    
    int dias_acima_da_media = 0;
    for (int i = 0; i < 31; i++) {
        if (faturamento[i] > media_mensal) {
            dias_acima_da_media++;
        }
    }
    cout << "Número de dias com faturamento acima da média mensal é de: " << dias_acima_da_media << " dias" << endl;

    return 0;
}

