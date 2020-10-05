#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED
#include "Computadora.h"
#include <iostream>

class Laboratorio{
private:
    Computador maquinas[5];
    int cont=0;

public:
    Laboratorio();
    void getcompu();
    void agregarpc(const Computador& compu);
};

#endif // LABORATORIO_H_INCLUDED
