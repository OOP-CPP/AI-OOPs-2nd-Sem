// C++ Program to Add 
// Two Complex Numbers

// Importing all libraries
#include<bits/stdc++.h>
using namespace std;

// User Defined Complex class
class Complex 
{ 
	// Declaring variables
	public: int real, imaginary;

	// Constructor to accept
	// real and imaginary part
	Complex(int tempReal = 0, 
			int tempImaginary = 0)
	{
		real = tempReal;
		imaginary = tempImaginary;
	}

	// Defining addComp() method
	// for adding two complex number
	Complex addComp(Complex C1, Complex C2)
	{
		// Creating temporary variable
		Complex temp;

		// Adding real part of 
		// complex numbers
		temp.real = C1.real + C2.real;

		// Adding Imaginary part of 
		// complex numbers
		temp.imaginary = (C1.imaginary + C2.imaginary);

		// Returning the sum
		return temp;
	}
};

// Driver code
int main()
{
	// First Complex number
	Complex C1(3, 2);

	// printing first complex number
	cout << "Complex number 1 : " << 
			C1.real << " + i" << 
			C1.imaginary << endl;

	// Second Complex number
	Complex C2(9, 5);

	// Printing second complex number
	cout << "Complex number 2 : " << 
			C2.real << " + i" << 
			C2.imaginary << endl;

	// For Storing the sum
	Complex C3;

	// Calling addComp() method
	C3 = C3.addComp(C1, C2);

	// Printing the sum
	cout << "Sum of complex number : " << 
			C3.real << " + i" << 
			C3.imaginary;
}
