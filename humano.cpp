#include "alumno.cpp"
#include <iostream>
using namespace std;

class Humano : Alumno{
	
	private: string h_nom, h_ape;
				
	
	public : 
		Humano(){
		}
		Humano(string curso, int codigo, int nota[3], string nombre, string apellido): Alumno(curso, codigo, nota){
			h_nom = nombre;
			h_ape = apellido;
		}
			
	void setCurso(string curso){a_cur = curso;}
	void setCodigo(int codigo){a_cod = codigo;}	
	void setNota0(int nota[0]){a_not[0] = nota[0];}	
	void setNota1(int nota[1]){a_not[1] = nota[1];}	
	void setNota2(int nota[2]){a_not[2] = nota[2];}
	void setNota3(int nota[3]){a_not[3] = nota[3];}
	void setNombre(string nombre){h_nom = nombre;}
	void setApellido(string apellido){h_ape = apellido;}
	
	string getCurso(){return a_cur;}
	int getCodigo(){return a_cod;}
	int getNota0(){return a_not[0];}
	int getNota1(){return a_not[1];}
	int getNota2(){return a_not[2];}
	int getNota3(){return a_not[3];}
	string getNombre(){return h_nom;}
	string getApellido(){return h_ape;}
	
	void mostrar(){
		cout<<"[+]Codigo: "<<a_cod<<"\n[+]Nombre: "<<h_nom<<"\n[+]Apellido: "<<h_ape<<"\n[+]Curso: "<<a_cur<<"\n[+]Notas:";
		for (int i=0; i<4; i++){
			cout<<"\n  ["<<i+1<<"]"<<a_not[i];
		}
		cout<<endl;
	}
};
