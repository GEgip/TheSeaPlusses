#include "Examen.h"
#include <iostream>
#include "fstream"

using namespace std;

Examen::Examen(MyString pregunta, MyString name, MyString lastName, MyString ID, int t)
{
	this->pregunta = pregunta;
	this->name = name;
	this->lastName = lastName;
	this->ID = ID;
	this->t = t;
}

Examen::Examen(const Examen& unExamen) {
	this->pregunta = unExamen.pregunta;
	this->name = unExamen.name;
	this->lastName = unExamen.lastName;
	this->ID = unExamen.ID;
}

Examen::~Examen() {

}

Examen& Examen::operator=(const Examen& unExamen)
{
	this->pregunta = unExamen.pregunta;
	this->name = unExamen.name;
	this->lastName = unExamen.lastName;
	this->ID = unExamen.ID;
	return(*this);
}

void Examen::ArrayTests(int t)
{
	generadorP = new MyString[t];
	generadorP = nullptr;
	int n = getT();
	if (t > 20) {
		t = 18;
	}
	for (int i = 0; i < t; i++) {
		generadorP[i] = " "; //this isn't working and idk how to fix it. 
	
	}
}

int Examen::getT() const
{
	return this->t;
}
void Examen::setPregunta(MyString& pregunta, int index)
{
	generadorP[index] = pregunta;
}
void Examen::setName(MyString& name) {
	this->name = name;
}
void Examen::setID(MyString& ID) {
	this->ID = ID;
}

MyString Examen::getPregunta()const {
	return (this->pregunta);
}
MyString Examen::getName()const {
	return(this->name);
}
MyString Examen::getID()const {
	return(this->ID);
}

void Examen::displayExam() {
	cout << "Nombre:" << getName() << "               " << "ID:" << getID() << endl;
	cout << endl;
	cout << "Fecha:" << MyDate::getDay() << "/" << MyDate::getMonth() << "/" << MyDate::getYear() << "            " << "Hora:" << MyTime::getHour() << ":" << MyTime::getMinutes() << ":" << MyTime::getSeconds() << endl;
	cout << endl;
	cout << endl;
	cout << "Preguntas:" << endl;

	cout << "1). " << getPregunta() << endl;
	cout << "2). " << getPregunta() << endl;
	cout << "3). " << getPregunta() << endl;
	cout << "\n\n" << endl;

}

void Examen::save()const
{
	ofstream file;
	file.open("text.txt");
	if (file.fail())
		cout << "ERROR:Failed." << endl << endl;
	else
	{
		file.write((char*)this, sizeof(Examen));
		file.close();
	}
}

istream& operator>>(istream& in, Examen& unExamen)
{
	cout << "Generador de preguntas: ";
	in >> unExamen.t;
	unExamen.ArrayTests(unExamen.t);
	cout << "Informacion del Examen" << endl << endl;
	
	for (int i = 0; i < unExamen.t; i++) {
		cout << "Pregunta" << i + 1 << endl;
		in >> unExamen.pregunta[i];
		cout << endl;
	
	}

	cout << endl << endl;
	return in;
}

ostream& operator<<(ostream& out, const Examen& unExamen)
{
	
	for (int i = 0; i < unExamen.t; i++) {
		cout << i + 1 << unExamen.pregunta[i];
		cout << endl << endl;
	}
	cout << endl;

	return out;
}