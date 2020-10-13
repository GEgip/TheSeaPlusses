#pragma once
#include <iostream>
using namespace std;
class MyInt
{
private: 
	int value;

public:
	MyInt(int value = 0);
	MyInt(const MyInt& anInteger);
	~MyInt();

	MyInt& operator = (const MyInt& anInteger);
	MyInt& operator = (int value);

	void setValue(int value);
	int getValue()const;

	MyInt absolute()const;

	MyInt operator+(const MyInt& anInteger)const;
	MyInt operator+(int value)const;
	friend MyInt operator+(int value, const MyInt& anInteger);

	MyInt operator-(const MyInt& anInteger)const;
	MyInt operator-(int value)const;
	friend MyInt operator-(int value, const MyInt& anInteger);

	MyInt operator*(const MyInt& anInteger)const;
	MyInt operator*(int value)const;
	friend MyInt operator*(int value, const MyInt& anInteger);

	MyInt operator/(const MyInt& anInteger)const;
	MyInt operator/(int value)const;
	friend MyInt operator/(int value, const MyInt& anInteger);

	MyInt operator%(const MyInt& anInteger)const;
	MyInt operator%(int value)const;
	friend MyInt operator%(int value, const MyInt& anInteger);

	bool operator==(const MyInt& anInteger)const;
	bool operator==(int value) const;
	friend bool operator==(int value, const MyInt& anInteger);

	bool operator!=(const MyInt& anInteger)const;
	bool operator!=(int value) const;
	friend bool operator!=(int value, const MyInt& anInteger);

	bool operator<(const MyInt& anInteger)const;
	bool operator<(int value) const;
	friend bool operator<(int value, const MyInt& anInteger);

	bool operator<=(const MyInt& anInteger)const;
	bool operator<=(int value) const;
	friend bool operator<=(int value, const MyInt& anInteger);

	bool operator>(const MyInt& anInteger)const;
	bool operator>(int value) const;
	friend bool operator>(int value, const MyInt& anInteger);

	operator int()const;

	bool operator>=(const MyInt& anInteger)const;
	bool operator>=(int value) const;
	friend bool operator>=(int value, const MyInt& anInteger);

	MyInt& operator+=(const MyInt& anINteger);
	MyInt& operator+=(int value);

	MyInt& operator-=(const MyInt& anINteger);
	MyInt& operator-=(int value);

	MyInt& operator*=(const MyInt& anINteger);
	MyInt& operator*=(int value);

	MyInt& operator/=(const MyInt& anINteger);
	MyInt& operator/=(int value);

	MyInt& operator%=(const MyInt& anINteger);
	MyInt& operator%=(int value);

	MyInt operator+()const;
	MyInt operator-()const;

	MyInt& operator++();
	MyInt operator++(int);

	MyInt& operator--();
	MyInt operator--(int);

	friend ostream& operator<<(ostream& out, const MyInt& anInteger);
	friend istream& operator>>(istream& in, const MyInt& anInteger);

};

