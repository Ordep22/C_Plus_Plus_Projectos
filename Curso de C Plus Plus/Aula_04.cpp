#include <iostream>

using namespace std;

int main()
{

    // Aula 04 de C++ - Variaveis

    cout << "\n";
    cout << "Quarta aula de C++";
    cout << "\n";

    // Declarando variávsi Tipo de variável

    int num_int; // Numero inteiro

    double num_fracionario_00;

    float num_fracionario_01; //É a mesma coisa que doble mas tem uma precisão menor

    bool zero_or_one; //É um tipo de variável booleana

    char letra; // Armazena poucos caracteres

    char letra_00[20]; // Armazena mais caracteres mas, em forma de um vetor

    string nome; //É possível armazenar um grande número de caracteres

    // Declarando variávsis com valores espscíficos

    int num_int_01 = 0;

    double num_fracionario_02 = 0;

    float num_fracionario_03 = 0;

    bool true_or_false = true;

    char letras = 'B';

    //Obtendo um número inteiro do usuário

    cout << "Insira um numero interio entre 0 e 100:";
    cin >> num_int_01;


    //Obtendo um número fracionário do usuário

    cout << "Insira um número fracionário qualquer:";
    cin >> num_fracionario_02 >> num_fracionario_03;


    //Printando o número inteiro 
    
    cout << "O valor do número inteiro é: ";
    cout << num_int_01 << endl;


    //Printando os números fracionários

    cout << "Os valores dos numeros fracionarios sao: ";    
    cout << num_fracionario_02 << " e " << num_fracionario_03 << endl;


    return 0;
}
