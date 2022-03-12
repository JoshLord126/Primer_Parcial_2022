#include <iostream>
using namespace std;
class Alumno{
	protected : string a_cur;
				int a_cod, a_not[4];

	protected : 
		Alumno(){
		}
		Alumno(string curso, int codigo, int nota[4]){
			a_cur = curso;
			a_cod = codigo;
			for (int i=0; i<4; i++){
				a_not[i] = nota[i];
			}
		}
		
	void mostrar();
};

