#include "Iranyitas.h"
#include <iostream>
using namespace std;


Ceg::Ceg()
{
	futar = NULL;
	megrendeles = NULL;
	mNum = 0;
	num = 0;

}

void Ceg::hire(const Futar & a)
{
	Futar newfutar = a;
	num++;
	Futar *tmp = new Futar[num];
	for (int i = 0; i < num - 1; i++)
	{
		tmp[i] = futar[i];
	}
	tmp[num - 1] = newfutar;
	delete[] futar;
	futar = tmp;

}

void Ceg::addOrder(const Megrendeles & m)
{
	mNum++;
	Megrendeles newMegrendeles = m;
	Megrendeles *tmp = new Megrendeles[mNum];
	for (int i = 0; i < mNum - 1; i++)
	{
		tmp[i] = megrendeles[i];
	}
	tmp[mNum - 1] = newMegrendeles;
	delete[] megrendeles;
	tmp = megrendeles;

}

Ceg::~Ceg()
{
	delete[] futar;
	delete[] megrendeles;
}

void Ceg::printFutarList() const
{
	for (int i = 0; i < num; i++)
	{
			 //�t kell �rni a futar ki�r�s�t
	}
}

Futar * Ceg::getClosest(const Megrendeles & m) const
{
	return NULL;
}



void Ceg::select(Futar & a, Megrendeles & m)
{
}

int Ceg::track(Megrendeles & m) const
{
	return 0;
}




Futar::Futar(int _posX, int _posY, bool _isEmpty, int _azonosito)
{
	
		posX = _posX;
		posY = _posY;
		isEmpty = _isEmpty;
		azonosito = _azonosito;		
		megrendeles = NULL;
}

int Futar::getX() const
{
	return posX;
}

int Futar::getY() const
{
	return posY;
}
ostream & operator<<(ostream & o, const Futar &a)
{
	o << "............................................." << endl;
	o << "Azonosito: " << a.getAzonosito() << endl;
	o << "Pozicio: (" << a.getX() << "," << a.getY() << ")"<<endl;
	if (a.getIsEmpty())
		o << "Ures" << endl;
	else {
		o << "Tele"<<endl;
	}
	o << "............................................." << endl;
	return o;
}
void Futar::print()
{
	
	cout << "Futar azonosito:" << getAzonosito() << "Eppen nincs csomagja:" << getIsEmpty() << " X pozicio:" << getX() << " Y pozicio:" << getY();
	
	
}
bool Futar::getIsEmpty() const
{
	return isEmpty;
}

int Futar::getAzonosito() const
{
	return azonosito;
}

void Futar::setX(int)
{
}

void Futar::setY(int)
{
}

void Futar::setIsEmpty(bool)
{
}

void Futar::setAzonosito(int)
{
}

void Futar::setMegrendeles(Megrendeles * m)
{
	megrendeles = m;
}

Megrendeles * Futar::getMegrendeles()
{
	return megrendeles;
}

double  Futar::getDistance(const Megrendeles & m) const
{
	return sqrt((m.getPosX() - getX())*(m.getPosX() - getX()) + (m.getPosY() - getY())*(m.getPosY() - getY()));
}

//bool Bicikli::inRadius(const Megrendeles & m)
//{
//	return false;
//}
//


Megrendeles::Megrendeles(int s, int px, int py, int dx, int dy)
{
	size = s;
	posX = px;
	posY = py;
	destX = dx;
	destY = dy;

}

int Megrendeles::getSize() const
{
	return size;
}

int Megrendeles::getPosX() const
{
	return posX;
}

int Megrendeles::getPosY() const
{
	return posY;
}

int Megrendeles::getDestX() const
{
	return destX;
}

int Megrendeles::getDestY() const
{
	return destY;
}

void Megrendeles::setPos()
{
	posX = destX;
	posY = destY;
	size = 0;

}