
#include "Point.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

void Point::setX(double p)
{
	this->x = p;
}

void Point::setY(double m)
{
	this->y = m;
}

double Point::getX()const
{
	return x;
}

double Point::getY()const
{
	return y;
}

ostream& operator<<(ostream& flux, const Point& obiect)
{
	flux << "coord x este: " << obiect.x << "\n";
	flux << "coord y este: " << obiect.y << "\n";
	return flux;
}

istream& operator>>(istream& flux, Point& obiect)
{
	flux >> obiect.x;
	flux >> obiect.y;
	return flux;
}
