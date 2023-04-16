#include <iostream>

using namespace std;

int main()
{
    int n,a,valor;
    cin >> n >> a;

    if(n >= 500)
        valor = n % 500;

    else{
        valor = n;
    }

    if(a - valor >= 0 && valor != 0)
        cout << "Sim" << "\n";
    else if (valor == 0)
        cout << "Sim" << "\n";
    else
        cout << "Nao" << "\n";
}
