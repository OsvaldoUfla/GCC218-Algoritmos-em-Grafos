#include <iostream>

using namespace std;

int main(){
/*
    int n; // Quantidade de estaçoẽs
    
    cin >> n ;
    
    int matriz_ad [n][n];
    
    for (int i =0 ; i < n ; i++){
        for ( int j =0 ; j < n ; j++){
            cin >> matriz_ad [i][j];
        }
    }
    
    for (int i =0 ; i < n ; i++){
        for ( int j =0 ; j < n ; j++){
            cout << matriz_ad[i][j];
        }
        cout << endl;
    }
*/

    bool D = 0,A = 1,B = 1;
      
    D = D || (A && B);
    
    cout << D;


return 0;
}
