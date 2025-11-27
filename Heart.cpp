#include <iostream>
using namespace std;

int main() {
    int a = 12;
    // UpperPart
    for (int i = 1; i <= a/3+1; i++){
        // 1st spaces
        for (int j = a/2; j >= i; j--){
            cout << "   ";
        }
        // 1st Half
        for (int k = 1; k <= i; k++){
            cout << "Y*S*";
        }
        for (int k = 2; k <= i; k++){
            cout << "Y*S*";
        }
        // Middle spaces
        for (int l = a/4+1; l >= i; l--){
            cout << "     ";
        }
        for (int l = a/4+1; l >= i; l--){
            cout << "     ";
        }
        // Second Part
        for (int k = 1; k <= i; k++){
            cout << "Y*S*";
        }
        for (int k = 2; k <= i; k++){
            cout << "Y*S*";
        }
        // for (int k = 2; k <= i; k++){
        //     cout << " **";
        // }
        cout << "\n";
    }
    
    // Lower Part
    for (int m= 1; m <= a+7; m++){
        for (int n = -1; n <= m; n++){
            cout << "  ";
        }
        for (int o = a*2-6; o >= m; o--){
            cout << "Y*";
        }
        for (int o = a*2-6; o >= m; o--){
            cout << "S*";
        }
        
        cout << "\n";
    }

    return 0;
}