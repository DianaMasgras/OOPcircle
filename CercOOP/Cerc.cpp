#include "Cerc.h"

Cerc::Cerc(double radius, Point point)
{
	this->radius = radius;
	this->point.setX(point.getX());
	this->point.setY(point.getY());
}

Cerc::Cerc()
{
	this->radius = 0;
	point.setX(0);
	point.setY(0);
}


double Cerc::operator!() const
{
	double aria = 0;
	aria = aria + (3.14 * this->radius * this->radius);
	return aria;
}

double Cerc::distance(Cerc obiect)
{

	return sqrt((obiect.point.getX() - this->point.getX()) * (obiect.point.getX() - this->point.getX()) + (obiect.point.getY() - this->point.getY()) * (obiect.point.getY() - this->point.getY()));
}

bool Cerc::inCircle(const Point p1) const
{
	double a;
	a = sqrt((p1.getX() - this->point.getX()) * (p1.getX() - this->point.getX()) + (p1.getY() - this->point.getY()) * (p1.getY() - this->point.getY()));
	if (a <= radius)
		return true;
	return false;
}

bool Cerc::intersectCircles(const Cerc c1) const
{
	double d;
	double sum = 0;
	d= sqrt((c1.point.getX() - this->point.getX()) * (c1.point.getX() - this->point.getX()) + (c1.point.getY() - this->point.getY()) * (c1.point.getY() - this->point.getY()));
	sum = this->radius + c1.radius;
	if (d <= sum)
		return true;
	return false;
}
Cerc& Cerc::operator+(Point p2)
{Cerc deplasat;
    deplasat.radius = this->radius;
	//deplasat.x=p2.x;
	//p2.point.getX
	deplasat.point.setX( p2.getX());
	deplasat.point.setY(p2.getX());
	return deplasat;
}  



Cerc& Cerc::operator+(Cerc C)
{
	Cerc Rezultat;
	Rezultat.radius = C.radius + this->radius;
	Rezultat.point.setX(C.point.getX() + this->point.getX());
	Rezultat.point.setY(C.point.getY() + this->point.getY());
	return Rezultat;
}

Cerc& Cerc::operator=(const Cerc& c) 
{
	this->radius = c.radius;
	this->point.setX(c.point.getX());
	this->point.setY(c.point.getY());
	cout << "operator egal";
	return (*this);
}

bool Cerc::operator>(const Cerc& c) const
{
	if (!(*this) > !c)
		return true;
	return false;
}

bool Cerc::operator<(const Cerc& c) const
{
	if (!(*this) < !c)
		return true;
	return false;
}

bool Cerc::operator<=( const Cerc& c) const
{
	if (!(*this) <= !c)
		return true;
	return false;
}

bool Cerc::operator>=(const Cerc& c) const
{
	if (!(*this) >= !c)
		return true;
	return false;
}

ostream& operator<<(ostream& flux,const Cerc& obiect)
{
	flux << "Diametrul este:" << obiect.radius << "\n";
	flux << "Originea este:" << obiect.point << "\n";
	return flux;
}

istream& operator>>(istream& flux, Cerc& obiect)
{
	flux >> obiect.radius;
	flux >> obiect.point;
	return flux;
}

