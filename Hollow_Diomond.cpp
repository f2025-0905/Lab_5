#include <iostream>
using namespace std;


int main() {
    
    int rows;
    cout << "Enter half num of rows: ";
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
            if (k == 1 || k == (i*2)-1){
            cout << "* ";
            } else {
                cout << "  ";
            }
            k++;
        }
        cout << "\n";
        i++;
    }
    
    int l = 1;
    
    while (l <= rows) {
        int m=1;
        while (m <= l){
            cout << "  ";
            m++;
        }
        int n = rows*2-1;
        while (n > l*2){
            if (n == rows*2-1 || n == (l*2)+1){
            cout << "* ";
            } else {
              cout << "  ";  
            }
            n--;
        }
        cout << "\n";
        l++;
    }

    return 0;
}