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
    void respaldartabla();
    void respaldar();
    void recupera();


    friend Laboratorio& operator<<(Laboratorio &lab, const Computador &c)
    {
        lab.agregarpc(c);

        return lab;
    }
};

#endif // LABORATORIO_H_INCLUDED
