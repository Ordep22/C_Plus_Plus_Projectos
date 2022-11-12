#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int a=4;
int b=4;
int c=4;

cout << "Aula 16: Modificadores de tipo";
cout << endl;


/*

Modificadores de tipo:
Tempo como função modificar o funcionamento padrão das variáveis.

Os modificadores de tipo são:

 - short: Dimunui a quantidade de informações que a variável pode armazenar
 - long: Aumenta a quantidade de informações que a variável pode armazenar
 - singed: Com sinal ???
 - unsinged: Sem sinal ???

*/
//------------------------------------------------------

cout << "O número de bits que a variável a ocupa é: "<< sizeof(a)<< endl;
cout << "O número de bits que a variável b ocupa é: "<< sizeof(b)<< endl;
cout << "O número de bits que a variável c ocupa é: "<< sizeof(c)<< endl;

/*
Até aqui vimos que as variáveis ocupam 4 bits.
Agora vamos implementar algumas tecnicas de viação de tipo para modificar o seu tamanho
O tamanho de armazenamento das variáveis são diferentes para cada compilador

int a_01 = a; Uma variável inteira armazena 4 bytes de memória 
int short b_01 = b; Uma variável inteira com o modificar de acesso short armazena 2 bytes de memória 
int long c_01 = c; Uma variável inteira com o modificar de acesso long armazena 8 bytes de memória

*/
//------------------------------------------------------

int a_01 = a;
int short b_01 = b;
int long c_01 = c;

cout << "O número de bits que a variável a_01 ocupa é: "<< sizeof(a_01)<< endl;
cout << "O número de bits que b variável b_01 ocupa é: "<< sizeof(b_01)<< endl;
cout << "O número de bits que c variável c_01 ocupa é: "<< sizeof(c_01)<< endl;

//------------------------------------------------------

int a_02 = 0;
singned int b_02 = -10;
unsigned int c_02 = -10;

cout << "O número de bits que a variável a_02 ocupa é: "<< sizeof(a_02)<< endl;
cout << "O número de bits que b variável b_02 ocupa é: "<< sizeof(b_02)<< endl;
cout << "O número de bits que c variável c_02 ocupa é: "<< sizeof(c_02)<< endl;

//------------------------------------------------------

/*
As variávsi char são geralemnete usadas para armazenar caracteres.
Mas elas podem também armazenar números no intervalode de -127 a +127
*/


char texto = 'C' ;
char texto_01 = 127;
char testo_02 = -127;







system("pause");
return 0;





}