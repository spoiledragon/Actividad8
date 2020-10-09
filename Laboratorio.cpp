    #include "Laboratorio.h"
    #include <iostream>
    using namespace std;
    Laboratorio::Laboratorio(){}

    void Laboratorio::agregarpc(const Computador& compu){
        if(cont<5)
        {   maquinas[cont]=compu;
            cont++;
            }else{
                cout<<"Arreglo lleno"<<endl;}
            }



    void Laboratorio::getcompu()
    {
        for(int i = 0; i<cont;i++ )
        {
            Computador &compu = maquinas[i];
            cout<<"Maquina numero:"<<i+1<<endl;
            cout<<"Nombre:"<<compu.getNombre()<<endl;
            cout<<"S.O:"<<compu.getSistema()<<endl;
            cout<<"Procesador:"<<compu.getProcesador()<<endl;
            cout<<"Ram:"<<compu.getRam()<<endl;
            cout<<endl<<endl;
            


        }
    }
