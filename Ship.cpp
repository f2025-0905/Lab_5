#include <iostream>
using namespace std;

int main() {
    int a = 8;
    
    
    // 1st uppar part
    for (int i = 1; i <= a-1; i++){
        for (int j = a*4; j >= (a+i); j--){
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
    
    for (int m = 1; m <= a/2-1; m++){
        for (int n = 1; n <= m; n++){
            cout <<"    ";
        }
        for (int o = (a*3)-(3*m); o >= m; o--){
            cout << "*";
        }
        for (int p = (a*3)-(3*m); p >= m; p--){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}