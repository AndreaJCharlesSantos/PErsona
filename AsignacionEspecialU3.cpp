#include <iostream>
using namespace std;

class Persona {
    public:
        Persona(string n) {nombre=n;};
        ~Persona();/*
        virtual string getDatos(){
            return(nombre);
        };*/
        string getDatos() {return (nombre);};
    
    private:
        string nombre;
};

class Empleado: public Persona {
    public:
    
        Empleado(string n,string e): Persona(n){empresa=e;};
        ~Empleado(){};
        string getDatos(){
        return Persona::getDatos()+ "trabaja en " + empresa;
};
    private:
        string empresa;

};

class Estudiante: public Persona {
    public:

        Estudiante(string n,string c): Persona (n){carrera=c;};
        ~Estudiante(){};
        string getDatos(){
        return Persona::getDatos() + " estudia " + carrera;
};
    private:
        string carrera;

};

int main(){
    Empleado empleadoDesc("Carlos","Lavandería");
    Persona pers("Juan");
    empleadoDesc=pers;
    cout<<empleadoDesc.getDatos()<<endl;

//Aquí habría que liberar memoria: cómo?
}