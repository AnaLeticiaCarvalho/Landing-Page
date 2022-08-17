#include <iostream>
#include <math.h>
using namespace std;
int main() {

    float num1, num2, resultado;
    int op;

    cout << "Informe o 1º número: ";
    cin >> num1;
    cout << "Informe o 2º: ";
    cin >> num2;
    cout << "---------------------------\n";
    cout << "Escolha uma operação matemática: ";
    cout << "1 - Adição\n";
    cout << "2 - Subtração\n";
    cout << "3 - Divisão\n";
    cout << "4 - Multiplicação\n";
    cout << "Opção: ";
    cin >> op;

    if (op==1)
    {
        resultado=num1+num2;
        cout << num1<< " + " << num2 << " = " << resultado;
    }

    else if (op==2)
    {
        resultado=num1-num2;
        cout << num1 << " - " << num2 << " = " << resultado;
    }

    else if (op==3)
    {
        resultado=num1/num2;
        cout << num1 << " / " << num2 << " = " << resultado;
    } 

    else resultado=num1*num2;
    cout << num1 << " * " << num2 << " = " << resultado;

    


    
    


}