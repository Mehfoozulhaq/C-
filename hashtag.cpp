#include <iostream>
using namespace std;

void printhashtag(int n) {
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            
            if ((i + j) % 2 == 0) {
                cout << "# ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Enter the size of the pattern (n x n): ";
    cin >> n;
    printhashtag(n);

    return 0;
}
