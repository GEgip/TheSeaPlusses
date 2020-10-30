#include "ExamenS.h"
#include <iostream>
#include "fstream"

using namespace std;

ExamenS::ExamenS(string pregunta1, string pregunta2, string name, string ID) {
	this->pregunta1 = pregunta1;
	this->pregunta2 = pregunta2;
	this->name = name;
	this->ID = ID;
}

ExamenS::ExamenS(const ExamenS& unExamen) {
	this->pregunta1 = unExamen.pregunta1;
	this->pregunta2 = unExamen.pregunta2;
	this->name = unExamen.name;
	this->ID = unExamen.ID;
}

ExamenS::~ExamenS() {

}

void ExamenS::setPregunta1(string pregunta1) {
	this->pregunta1 = pregunta1;
}
void ExamenS::setPregunta2(string pregunta2) {
	this->pregunta2 = pregunta2;
}
void ExamenS::setName(string name) {
	this->name = name;
}
void ExamenS::setID(string ID) {
	this->ID = ID;
}

string ExamenS::getPregunta1()const {
	return (this->pregunta1);
}
string ExamenS::getPregunta2()const {
	return (this->pregunta2);
}
string ExamenS::getName()const {
	return(this->name);
}
string ExamenS::getID()const {
	return(this->ID);
}

void ExamenS::displayExam() {
	cout << "Nombre:" << getName() << "               " << "ID:" << getID() << endl;
	cout << endl;
	cout << "Fecha:" << MyDate::getDay() << "/" << MyDate::getMonth() << "/" << MyDate::getYear() << "            " << "Hora:" <<
		MyTime::getHour() << ":" << MyTime::getMinutes() << ":" << MyTime::getSeconds() << endl;
	cout << endl;
	cout << endl;
	cout << "Preguntas:" << endl;

	cout << "1). " << getPregunta1() << endl;
	cout << "2). " << getPregunta2() << endl;
	cout << "\n\n" << endl;

}

void ExamenS::save()const
{
	ofstream file;
	file.open("text.txt");
	if (file.fail())
		cout << "ERROR:Failed." << endl << endl;
	else
	{
		file.write((char*)this, sizeof(ExamenS));
		file.close();
	}
}



