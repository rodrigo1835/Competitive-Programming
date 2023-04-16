#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p,g,f,c,contador;
    contador = 0;

    cin >> p >> g >> f >> c;
    for(int i = 1; i<f+1;i++){
        if(g >= 1){
            g = g - 1;
            contador++;
        }
    }

    if(p == 0){
        cout << 0 << "\n";
    }else if(contador + c > p)
        cout << p << "\n";
    else
        cout << contador + c << "\n";
    return 0;
}
