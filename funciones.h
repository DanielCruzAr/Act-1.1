/*
Daniel Cruz Arciniega
A01701370
*/
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>

class Funciones {
public:
    Funciones(){};
    sumaIterativa(int n);
    sumaRecursiva(int n);
    sumaDirecta(int n);
};

int Funciones::sumaIterativa(int n){ //O(n)
    int acum=0;
    for(int i=1;i<=n;i++){
        acum+=i;
    }
    return acum;
}

int Funciones::sumaRecursiva(int n) { //O(n)
    if(n<=1){
        return 1;
    }
    else{
        return n+sumaRecursiva(n-1);
    }

}

int Funciones::sumaDirecta(int n){ //O(1)
    return (1/2*n*(n+1));
}

#endif // FUNCIONES_H_
