#ifndef Horario_H
#define Horario_H

#pragma once
#include <sstream>
#include <string>

using namespace std;
class Horario
{
private:
	int aHora;
	int aMinutos;

public:
	Horario(void);
	~Horario(void);
	void setHora(int);
	int getHora();
	void setMinutos(int);
	int getMinutos();
	string toString();
};
#endif
