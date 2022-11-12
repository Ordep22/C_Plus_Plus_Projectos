#include <iostream>
#include <stdlib.h>



using namespace std;

int main(){

cout << "Ola dev's!"<<endl;
cout << "Aula 17: Operadores aritmeticos"<<endl;
cout << "Lets to code!"<<endl;

/*

Hoje vamos estudar algumas operções matemática em C++
Soma 
x + y = Z
x - y = Z
x * y = Z
x - y = Z
*/

int a,b,c;
double d;

a = 1;
b = 2;
c = a + b;


cout << "------------------------------------"<<endl;
cout << "Operacao de soma:";
cout << "a = " << a << " b =" << b <<endl;
cout << "A soma entre a e b e: "<< c << endl;
cout << "------------------------------------"<< endl;

a = 4;
b = 1;
c = a - b;

cout <<"-------------------------------------"<<endl;
cout <<"Operacao de subtracao:";
cout << "a = " << a << " b =" << b <<endl;
cout << " Asubtracao entre a e b e:"<< c <<endl;
cout <<"------------------------------------"<<endl;

a = 4;
b = 6;
c = a * b;

cout << "------------------------------------" <<endl;
cout << "Produto:"<<endl;
cout << "a = " << a << " b =" << b <<endl;
cout << "O produto entre a e b e: " << c << endl;
cout << "------------------------------------" <<endl;

a = 10;
b = 2;
d = a /(b+1.5);

//Quando formos utilizar números com casas decimais em C++ devemos explicitamente usar as casa 
//decimais para que o código possa identificá-las

cout << "-------------------------------------" <<endl;
cout << "Divisao" << endl;
cout << "a = " << a << " b =" << b <<endl;
cout << "Adivisao entre a e b e:"<< d << endl;
cout << "------------------------------------" <<endl;


return 0;



}