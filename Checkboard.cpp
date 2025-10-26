#include <iostream>
using namespace std;

int main() {
    
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    
    cout << "Enter number of columns: ";
    cin >> column;
    
    for (int a = 1; a <= row; a++){
        for(int b = 1; b <= column; b++){
            if (a%2 == 0){
                cout << " *";
                
            }else {
                cout << "* ";
            }
        }
        cout << "\n";
    }

    return 0;
}