#include <iostream>
using namespace std;


int main() {
    
    int rows;
    cout << "Enter num of rows: ";
    cin >> rows;
    
    int i = 1;
    
    while (i <= rows) {
        int j=1;
        while (j <= rows-i){
            cout << "  ";
            j++;
        }
        int k = 1;
        while (k < i*2){
            cout << "* ";
            k++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}