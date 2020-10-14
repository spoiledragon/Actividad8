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
        cout<<left;
        cout<<setw(20)<<"Nombre"<<"||";
        cout<<setw(20)<<"Procesador"<<"||";
        cout<<setw(5)<<"ram"<<"||";
        cout<<setw(20)<<"Sistema"<<"||"<<endl;
        for(int i = 0; i<cont;i++ )
        {
            Computador &compu = maquinas[i];
            cout<<compu<<endl;
    
        }
    }
