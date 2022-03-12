#include "humano.cpp"
#include <iostream>
using namespace std;

int main(){
	int m_can, m_cod, m_not[4], m_pro = 0;
	string m_nom, m_ape, m_cur;
	
	cout<<"Bienvenido, por favor ingrese lo solicitado a continuacion\n\n";
	cout<<"Cantidad de estudiantes: ";
	cin>>m_can;
	
	for(int ii=0; ii<m_can; ii++){
		system("cls");
		cout<<"------------Alumno No."<<ii+1<<"------------"<<endl;
		cout<<"Codigo de alumno: ";
		cin>>m_cod;
		cout<<"Nombre del alumno: ";
		cin>>m_nom;
		cout<<"Apellido del alumno: ";
		cin>>m_ape;
		cout<<"Curso: ";
		cin>>m_cur;
		
		for (int i=0; i<4; i++){
			cout<<i+1<<"# Nota: ";
			cin>>m_not[i];
			m_pro = m_pro + m_not[i];
		}
		
		system("cls");
		cout<<"------Resumen del Alumno No."<<ii+1<<"------"<<endl;
		Humano obj = Humano(m_cur, m_cod, m_not, m_nom, m_ape);
		obj.mostrar();
		
		cout<<"    [+]Estado del curso: ";
		
		m_pro = m_pro/4;
		if(m_pro>60){
			cout<<"Aprobado";
		}else{
			cout<<"Reprobado";
		}
		cout<<", nota final "<<m_pro<<"\n\n\n";
		system("pause");
		m_pro = 0;
	}
}
