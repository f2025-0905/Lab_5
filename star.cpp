#include <iostream>
using namespace std;

int main() {
    int a = 11;
    
    
    // 1st uppar part
    for (int i = 1; i <= a-1; i++){
        for (int j = a*4; j >= (a+i)-2; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        for (int l = 1; l <= i-1; l++){
            cout << "*";
        }
        cout <<"\n";
    }
    
    // Middle Part
    for (int m = 1; m <= a/2; m++){
        for (int n = 1; n <= m; n++){
            cout <<"    ";
        }
        for (int o = (a*3)-(3*m)+2; o >= m; o--){
            cout << "*";
        }
        for (int p = (a*3)-(3*m)+1; p >= m; p--){
            cout << "*";
        }
        cout << "\n";
    }
    
    // Last two wings
    for (int q = 1; q <= a-2; q++){
        for (int r = (a*2)-3; r >= q; r--){
            cout << " ";
        }
        for (int s = 2; s <= (a+7)-(2*q); s++){
            cout << "*";
        }
        for (int t = 1; t <= q; t++){
            cout << "  ";
        }
        for (int t = 2; t <= q; t++){
            cout << "  ";
        }
        for (int t = 2; t <= q; t++){
            cout << "  ";
        }
        
        
        for (int u = 2; u <= (a+7)-(q*2); u++){
            cout << "*";
        }
        cout << "\n";
    }
    
    
    
    return 0;
}