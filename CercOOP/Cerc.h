#pragma once
#include <iostream>
using namespace std;
#include"Point.h"

class Cerc
{
private:
	double radius;
	Point point;
public:
	Cerc(double radius, Point point);
	Cerc();
	friend ostream& operator<<(ostream& flux, const Cerc& obiect);
	friend istream& operator>>(istream& flux,  Cerc& obiect);
	double operator!() const;
	double distance(Cerc obiect);
	bool inCircle( const Point p1) const;
	bool intersectCircles( const Cerc c1) const;
	Cerc& operator+(Point p2);
	Cerc& operator+(Cerc c2);
	Cerc& operator=(const Cerc& c);
	bool operator>( const Cerc& c) const ;
	bool operator<( const Cerc& c) const;
	bool operator<=(const  Cerc& c) const;
	bool operator>=( const Cerc& c) const;

}; 

