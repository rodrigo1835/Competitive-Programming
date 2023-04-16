#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,dia,mesmo;
    dia = 1;
    vector<int> prob;
    vector<int> diafinal;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        prob.push_back(a);
    }

    sort(prob.begin(), prob.end());
    for(int j:prob){
        if(j >= dia)
            diafinal.push_back(j);

        else if(j == mesmo)
            continue;

        dia++;
        mesmo = j;
    }

    cout << diafinal.size() << "\n";


    return 0;
}
