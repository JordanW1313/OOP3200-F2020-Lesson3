#pragma once
#include <string>
#ifndef _CARTESIAN_POINT_
#define _CARTESIAN_POINT_


// class declaration section
class CartesianPoint
{
public:

	/* Constructor: Used to initialize objects*/
	CartesianPoint(int x = 1, int y = 1);
	~CartesianPoint();

	/* copy constructor */
	CartesianPoint(const CartesianPoint& point2);

	/* operator overloads */
	CartesianPoint operator+(const CartesianPoint& point2) const;

	double operator-(const CartesianPoint& pointTo) const;
	bool operator==(const CartesianPoint& otherPoint) const;


	// --------------------------------------------------------------------------------
	/* Accessors: Used to query the state of the object*/

	// get x
	int GetX() const;

	// get y
	int GetY() const;

	// -------------------------------------------------------------------------------
	/* Mutator(s): Used to change the state of the object*/

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& pointTo) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int myX; // x-axis (horizontal) value
	int myY;  // y-axis (vertical) value

};

#endif // defined (_CARTESIAN_POINT_)
