#include <iostream>
#include "lib.h"

int main(){
    int a;
    cin >> a;
    if (primo(a)==true){
        cout << "numero primo" << endl;
    } else {
        cout << "numero non primo" << endl;
    }
}
