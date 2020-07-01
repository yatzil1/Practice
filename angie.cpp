#include <string>
using std::string;
using std::getline;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//----------------------Clase LibroCalif--------------------
class LibroCalif
{
public:
	void mostrarMensaje()
	{
		
		cout << "Este es el nuevo libro del curso :\n"<< obtenerNombreCurso() << std::endl;
	}
	string obtenerNombreCurso()
	{
		return nombreCurso;
	}
	void establecerNombreCurso(string nombre)
	{
		nombreCurso = nombre;
	}

private:
	string nombreCurso;
};
//-----------------------Fin de la clase----------------------

int main()  // MAIN... 
{
	string nombreDelCurso;
    LibroCalif miLibro;
	cout << "El nombre inicial del curso es:"<< miLibro.obtenerNombreCurso() << endl;

	cout << "Ingrese el nombre del nuevo curso " << endl; 
	getline ( cin,nombreDelCurso );
    miLibro.establecerNombreCurso(nombreDelCurso);
    
	miLibro.mostrarMensaje();

	cout << endl;

	return 0;

}          // FIN DEL MAIN.


