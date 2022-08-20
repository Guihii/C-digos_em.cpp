#include <iostream>
using namespace std;

int main() {
  cout << "Bem vindo a calculadora de números inteiros \n" << endl;

  int op, op2, val1, val2;
  
  
  cout << "\tInforme o primeiro e o segundo valor:\t\n " << endl;
  cin >> val1 >> val2;

  cout << "Informe a operação que você deseja fazer: \n";
  cout << "\t\t| [1] SOMA| \n";
  cout << "\t\t| [2] SUBTRAÇÃO| \n";
  cout << "\t\t| [3] DIVISÃO| \n";
  cout << "\t\t| [4] MULTIPLICAÇÃO| \n";
  cin >> op;


  switch(op)
    {
      case 1: 
        cout << "O valor da soma dos valores é: " << val1 + val2 << endl;
        break;
       case 2: 
        cout << "O valor da subtração dos valores é: " << val1 - val2  << endl;
        break;
       case 3: 
        cout << "O valor da divisão dos valores é: " << val1 / val2 << endl;
        break;
       case 4: 
        cout << "O valor da multiplicação dos valores é: " << val1 * val2 << endl;
        break;
      
    }

  cout << "\n Deseja fazer outra operação? \n" << endl;
  cout << "\t\t | [1] SIM |" << endl;
  cout << "\t\t | [2] NÃO |" << endl;
  cin >> op2;

    if (op2 == 1){
        cout << "Reinicie o programa " << endl;
      }
    else
    {
    cout << "Obrigado, volte sempre: ";
    }

  return 0;
}