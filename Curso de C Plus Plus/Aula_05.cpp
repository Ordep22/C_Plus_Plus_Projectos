#include <iostream>

using namespace std;

// As variáveis globais são declaradas foras do main() portanto elas não podem ser alteradas
// ao longo da excução do script
// #define pode armazenar alguns comandos além de informações

//Armazenando uma informação 
#define escola  = "Escola de Programação"

//Armazenando um comando
#define instituto cout << "Relatório do Instituto de Programação C++"




int main()
{
    // Todas as variáveis definidas dentro do main() são variáveis locais 
    //portanto elas podem ser modificadas



    cout << "Declarando multiplas variais" << endl;

    int n_alunos = 0, n_professores = 0 , n_limpeza = 0;

    // Recebendo o número de alunos ativos na escola
    cout << endl;
    cout << "Entre com o numero de alunos da escola: ";
    cin >> n_alunos;

    // Recebendo o número de professores ativos na escola
    cout << endl;
    cout << "Entre com o numero de professores da escola: ";
    cin >> n_professores;

    // Recebendo o número de funcionários terceirizados
    cout << endl;
    cout << "Entre com o numero de colaboradores terceirizados: ";
    cin >> n_limpeza;

    //Imprimindo número de alunos, professores e terceirizados
    cout << endl;
    instituto;
    cout << endl;
    cout << "O número de alunos ativos é: " << n_alunos<< endl;
    cout << "O número de professores é: " << n_professores<< endl;
    cout << "O número de funcionários terceirizados é " << n_limpeza << endl;  






    return 0;
}