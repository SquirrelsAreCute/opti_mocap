#include <cmath>
#include <string>

struct vect2D {
	double x;  
	double y;  

	vect2D(double x, double y)
		: x(x), y(y)
		  // parameterized constructor
	{
	}
	double dist() 
		// lenght
	{
	   	return std::sqrt(x*x + y*y); 
	}
	double operator*(const vect2D& e) 
		// scalar product of 2 vectors
	{
		return x*e.x + y*e.y;
	}
	vect2D operator*(double c)
		// scalar multiplication
	{
		return vect2D(x*c, y*c);
	}
	vect2D operator+(const vect2D& e)
		// addition
	{
		return vect2D(x+e.x, y+e.y);
	}
	vect2D operator+(double c)
		// scalar addition
	{
		return vect2D(x+c, y+c);
	}
	vect2D operator-(const vect2D& e)
		// addition
	{
		return vect2D(x-e.x, y-e.y);
	}
	vect2D operator-(double c)
		// scalar soustraction
	{
		return vect2D(x-c, y-c);
	}
	vect2D operator/(double c)
		// scalar division
	{
		return vect2D(x/c, y/c);
	}

};

struct vect3D {
	double x;  
	double y;  
	double z;
	vect3D(double x, double y, double z)
		: x(x), y(y), z(z)
		  // parameterized constructor
	{
	}
	double dist() 
		// lenght
	{
	   	return std::sqrt(x*x + y*y + z*z); 
	}
	double dist_xy()
		// length on xy
	{
		return std::sqrt(x*x + y*y);
	}
	double operator*(const vect3D& e) 
		// scalar product of 2 vectors
	{
		return x*e.x + y*e.y + z*e.z;
	}
	vect3D operator*(double c)
		// scalar multiplication
	{
		return vect3D(x*c, y*c, z*c);
	}
	vect3D operator+(const vect3D& e)
		// addition
	{
		return vect3D(x+e.x, y+e.y, z+e.z);
	}
	vect3D operator+(double c)
		// scalar addition
	{
		return vect3D(x+c, y+c, z+c);
	}
	vect3D operator-(const vect3D& e)
		// addition
	{
		return vect3D(x-e.x, y-e.y, z-e.z);
	}
	vect3D operator-(double c)
		// scalar soustraction
	{
		return vect3D(x-c, y-c, z-c);
	}
	vect3D operator/(double c)
		// scalar division
	{
		return vect3D(x/c, y/c, z/c);
	}
	vect2D xy()
		// only on x, y
	{
		return vect2D(x, y);
	}
};

struct mytwist {
	// linear
	vect3D l;
	// angular
	vect3D a;

	mytwist(vect3D l, vect3D a)
	   : l(l), a(a)
	{
	}		
};
