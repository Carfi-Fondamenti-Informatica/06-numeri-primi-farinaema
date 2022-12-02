#include <iostream>
#include "lib.h"
using namespacce std;


int main (){
    return 0;
}

bool primo ( int a ){

    int i=1, n=a;

    if (a != 1){
        do{
            i++;
            n=a%i;
        } while ( n );
    } else {
        return true;
    }

    if ( i==a ){
        return true;
    } else {
        return false;
    }
}
