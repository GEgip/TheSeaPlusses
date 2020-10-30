#pragma once
#include "MyTime.h"
#include "MyDate.h"
#include "MyString.h"
#include "MyInt.h"
#include <iostream>

class ExamenS : public MyDate, public MyTime, public MyString, public MyInt {
private:
	string pregunta1;
	string pregunta2;
	string name;
	string ID;

public:
	//Constructor
	ExamenS(string pregunta1 = "BLANK", string pregunta2 = "BLANK", string name = "___", string ID = "____");
	ExamenS(const ExamenS& unExamen);

	//Deconstructor
	~ExamenS();

	//setters
	void setPregunta1(string);
	void setPregunta2(string);
	void setName(string);
	void setID(string);

	//getters
	string getPregunta1()const;
	string getPregunta2()const;
	string getName()const;
	string getID()const;

	//Funciones
	void displayExam();

	//Save in a file
	void save()const;

};
