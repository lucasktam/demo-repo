#include <iostream>

using namespace std;

int main(){
    cout << "Hello world" << endl;
    cout << "hi" << endl;
    int rows = 5;
    int cols = 4;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << ":3 ";
        }
        cout << "\n";
    }
    
    return 0;
}