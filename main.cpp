#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"
using namespace std;
Computador c1;
Computador c2;
Computador c3,c4;
Laboratorio Lab1;
int main(){

c1.setNombre("Juanito1");
c1.setSistema("Windows8");
c1.setProcesador("Intel Core i3");
c1.setRam(4);

c2.setNombre("Juanito MASTER RACE");
c2.setSistema("Windows10");
c2.setProcesador("Intel Core i9");
c2.setRam(64);

//Computador c3 = Computador("Intel Lentium","windows me","Juanito tostador",1);
//Computador c4 = Computador("threadripper 2990X","windows 12","Juanito nasa PC",256);
  /* 
   cout<<"se añadieron los 3 computadores "<<endl;
   Lab1<<c1<<c2;

   //computador 3 
   cin>>c3;
   cout<<"se añadio"<<endl;
   //Lab1<<c3;
   
   Lab1.getcompu();
   //Lab1.respaldartabla();
   Lab1.respaldar();//linea por linea
   */

   Lab1.recupera();
   Lab1.getcompu();
   Lab1.respaldartabla();
  
   return 0;
}
