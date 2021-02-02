#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	double x, y;
public:
	Point(double x, double y);
	Point();
	void setX(double p);
	void setY(double m);
	double getX () const;
	double getY()const;
	friend ostream& operator<<(ostream& flux, const Point& obiect);
	friend istream& operator>>(istream& flux, Point& obiect);
	// tema curatare const
};


