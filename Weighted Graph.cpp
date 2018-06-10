// Adjacency Matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

using namespace std;

int main()
{
	int numPoints;
	cout << "Please enter number of points : ";
	cin >> numPoints;
	string * points = new string[numPoints];
	for (int x = 0; x < numPoints; x++)
	{
		string input;
		cout << "Enter point " << x + 1 << ": ";
		cin >> points[x];
	}

	cout << "List points to define edges: ";

	string edge1;
	string edge2;


	do {

		cout << "Edge 1: ";
		cin >> edge1;
		cout << "Edge 2: ";
		cin >> edge2;

		if (edge1 == "exit" || edge2 == "exit")
			break;

		int e1Index;
		int e2Index;

		for (int x = 0; x < numPoints; x++)
		{
			if (points[x] == edge1)
				e1Index = x;
			if (points[x] == edge2)
				e2Index = x;
		}

		matrix[e1Index][e2Index] = 1;
		matrix[e1Index][e2Index] = 1;

	} while (edge1 != "exit" && edge2 != "exit");

	for (int x = 0; x < numPoints; x++)
		for (int y = 0; y < numPoints;y++)
			cout << matrix[x][y];

}

