#include <iostream>
#include "Cerc.h"
#include <algorithm>
using namespace std;


int main()
{
	/* Cerc c1, c2, c3;
	Point p1;

	cin >> c1;
	cout << c1;
	cin >> p1;
	cout << p1;
	cin >> c2;
	cout << c2;

	cout<<"Aria este:"<<!c1;
	cout << "Distanta este: " << "\n"<< c1.distance(c2);
	cout << "punctu se afla in cerc:" << "\n" << c1.inCircle(p1);
	cout << "Cercurile se intersecteaza: " << "\n" << c1.intersectCircles(c2);
	cout << "Adunarea unui cerc cu un punct este: " << "/n" << c1+p1;
	cout << "Adunarea a doua cercuri este: " << "/n" << c1 + c2; */
	//se da un sir de cercuri sa se sortezetoate cercurile dupa aria lor;
	/* Cerc sir[5];
	for(int i=0;i<=4;i++)
	{
		cin >> sir[i];
	int size = sizeof(sir) / sizeof(sir[0]);
	*/
	Cerc sir[100];
	int n;
	cout << "n este:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sir[i];
	}
	/*for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sir[i] > sir[j])
			{
				Cerc aux = sir[i];
				sir[i] = sir[j];
				sir[j] = aux;
			}
		}
	} */


	/* std::sort(sir + 0, sir + n);
	for (int i = 0; i < n; i++)
	{
		cout << "Cercurile sortate sunt: ";
		cout << sir[i];
	} */

	Cerc myFunction(Cerc sir[100], int n);
	{
		cout << "n este:"; cin >> n;
		for (int i = 0; i < n-1; i++)
			for (int j = i + 1; j < n; j++) 
			{
				if (!sir[i] < !sir[j])
					cout << sir[i];
		    }
	}
	std::sort(sir + 0, sir + n, myFunction );
	for (int i = 0; i < n; i++)
	{
		cout << "Cercurile sortate sunt: ";
		cout << sir[i];
	}

}