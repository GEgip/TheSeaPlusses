#pragma once
#include "MyInt.h"
#include "MyDate.h"
#include "MyTime.h"
#include "MyString.h"
class Examen : public MyDate, public MyTime, public MyInt, public MyString
{
private:
	MyString pregunta;
	MyString* generadorP;
	MyString name;
	MyString lastName;
	MyString ID;
	int t;
public:
	Examen(MyString pregunta = "BLANK", MyString name = "_", MyString lastName = "_", 
		MyString ID = "__", int t =0);
	Examen(const Examen& unExamen);
	~Examen();
	Examen& operator=(const Examen& unExamen);

	//Guardar Examenes
	void ArrayTests(int t);
	int getT()const;

	//Set
	void setPregunta(MyString& pregunta, int index);
	void setName(MyString& name);
	void setID(MyString& ID);

	//get
	MyString getPregunta()const;
	MyString getName()const;
	MyString getID()const;
	
	friend istream& operator>>(istream& in, Examen& unExamen);
	friend ostream& operator<<(ostream& out, const Examen& unExamen);

	void displayExam();

	void save()const;
};