#include <iostream>
using namespace std;


int main() {
    
    int rows, i=1;
    cout << "Enter num of rows: ";
    cin >> rows;
    
    while (i <= rows){
        int  j=1;
        while (j <= i){
            cout << "* ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}