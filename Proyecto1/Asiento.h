#ifndef Asiento_H
#define Asiento_H

#pragma once

using namespace std;
class Asiento
{
private:
	char aEstado;

public:
	Asiento();
	~Asiento(void);
	void setEstado(char);
	char getEstado();
};
#endif
