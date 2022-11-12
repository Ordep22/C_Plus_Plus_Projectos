#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{

    cout << endl;
    cout << "Aula 14: Continuação função Stream" << endl;

    cout << "Estudando a entrada e saída de dados!" << endl;

    cout << endl;

    // Decimal

    cout << "Informando uma operação em valores deimais: ";
    cout << 10 + 50 << endl;

    // Exadecimal

    cout << "Informando um operação em valores exadecimais: ";
    cout << hex << 10 + 50 << endl;

    // Manipulando a formatação de saída dos dados

    cout << "Informando uma operação em valores exadecimais com edição no console";
    cout << "Informando o valor em exadecimal:";
    cout << setw(110) << hex << 1000 + 237 << endl;

    return 0;
}
