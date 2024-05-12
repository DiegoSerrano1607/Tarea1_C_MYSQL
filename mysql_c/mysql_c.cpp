
#include <iostream>
#include "Cliente.h"

using namespace std;
int main(){
   
    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono=0,id=0;
    Cliente c = Cliente();
    c.leer();
    cout << "Ingrese ID" << endl; 
    cin >> id;
    cin.ignore(); 
    cout << "Ingrese NIT: ";
    getline(cin, nit);
    cout << "Ingrese Nombres: ";
    getline(cin, nombres);
    cout << "Ingrese Apellidos: ";
    getline(cin, apellidos);
    cout << "Ingrese Direccion: ";
    getline(cin, direccion);
    cout << "Ingrese Telefono: ";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha Nacimiento: ";
    cin >> fecha_nacimiento;
    c = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit,id);
    c.actualizar();
    c.leer();
    cout << "Ingrese ID" << endl;
    cin >> id;
    c.setId(id);
    c.borrar();
    c.leer();
    system("pause");
    return 0;
    
}
