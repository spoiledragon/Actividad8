    #include "Laboratorio.h"
    #include <iostream>
    #include <string>
    #include <fstream>
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
        //encabezado
        cout<<left;
        cout<<setw(20)<<"Nombre"<<"||";
        cout<<setw(20)<<"Procesador"<<"||";
        cout<<setw(5)<<"ram"<<"||";
        cout<<setw(20)<<"Sistema"<<"||"<<endl;
        //barra separadora

        cout<<left;
        for(int i=0;i<70;i++)
        {
            cout<<"-";
        }
        cout<<endl;
        
        for(int i = 0; i<cont;i++ )
        {
            Computador &compu = maquinas[i];
            cout<<compu<<endl;
    
        }
    }

    //pos la tabla
    void Laboratorio::respaldartabla(){
         ofstream archivo("ComputadorasTabla.txt");
            if(archivo.is_open()){
                archivo<<left;
                archivo<<setw(20)<<"Nombre"<<"||";
                archivo<<setw(20)<<"Procesador"<<"||";
                archivo<<setw(5)<<"ram"<<"||";
                archivo<<setw(20)<<"Sistema"<<"||"<<endl;
                for(int i = 0; i<cont;i++ )
                {
                Computador &compu = maquinas[i];
                archivo<<compu<<endl;
                }
            }

            archivo.close();
    }
        //repaldar normalito
        void Laboratorio::respaldar(){
         ofstream archivo("Computadoras.txt");
            if(archivo.is_open()){

                for(int i = 0; i<cont;i++ )
                {
                Computador &compu = maquinas[i];
                archivo<<compu.getNombre()<<endl;
                archivo<<compu.getProcesador()<<endl;
                archivo<<compu.getRam()<<endl;
                archivo<<compu.getSistema()<<endl;
                }
            }

            archivo.close();
    }
            

void Laboratorio::recupera(){
    ifstream archivo("Computadoras.txt");
        if(archivo.is_open()){
            string temporal;
            int x;

            Computador c;

            while (true)
            {
                getline(archivo,temporal);

                if(archivo.eof()){
                    break;
                }
                c.setNombre(temporal);

                getline(archivo,temporal);
                c.setProcesador(temporal);

                getline(archivo,temporal);
                x=stoi(temporal);//string a entero
                c.setRam(x); 

                getline(archivo,temporal);
                c.setSistema(temporal); 

                agregarpc(c);
            }
            
        }

        archivo.close();

}