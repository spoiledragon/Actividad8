#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"
using namespace std;
Computador c1;
Computador c2;
Laboratorio Lab1;
int main(){

c1.setNombre("Juanito1");
c1.setSistema("Windows8");
c1.setProcesador("Intel Core i3");
c1.setRam(4);

c2.setNombre("Juanito2");
c2.setSistema("Windows10");
c2.setProcesador("Intel Core i9");
c2.setRam(64);

Lab1.agregarpc(c1);
Lab1.agregarpc(c2);



Lab1.getcompu();
   return 0;
}
