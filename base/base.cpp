#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n; //atribuindo a n o valor de entrada

    vector<int> arr(n); 
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // mudar aq

    cout << "Resultado: " << n << endl; //imprimindo o resultado da função
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; // Número de casos de teste
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}