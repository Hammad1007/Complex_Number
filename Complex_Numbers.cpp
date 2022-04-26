#include <iostream>	
#include <cstring>
#include <string>
#include <cmath>	// for handling inbuilt math functions
#include <stdlib.h>
using namespace std;

// class starts here
class Complex {
private:  
	// private data members 
	int real;
	int com;
public: 
	// functions are kept public in order to access them in the main function
	// Default Constructor
	Complex() {
		cout << "Complex() called.\n";
		real = 0, com = 0;
	}

	// Parameterised Constructor
	Complex(int real, int com) {
		this->real = real;
		this->com = com;
	}

	// Copy Constructor
	Complex(Complex& C) {
		real = C.real;
		com = C.com;
	}

	// Ostream operator
	friend ostream& operator<<(ostream& out, const Complex& cn) {
		out << "Real part is: " << cn.real << endl;
		out << "Imaginary part is: " << cn.com << endl;
		return out;
	}

	// Istream operator
	friend istream& operator>>(istream& in, Complex& cn) {
		cout << "Enter the real part: ";
		in >> cn.real;
		cout << "Enter the imaginary part: ";
		in >> cn.com;
		return in;
	}

	// Input take
	void input() {
		cout << "Enter the real number: ";
		cin >> real;
		cout << "Enter the imaginary part: ";
		cin >> com;
	}

	// Displaying the output
	void output() {
		cout << "The number is: ";
		if (com < 0) {
			cout << real << " + " << "(" << com << ")" << "i" << endl;
		}
		else if (com == 0) {
			cout << real << endl;
		}
		else {
			cout << real << " + " << com << "i" << endl;
		}
	}

	// Setters
	void setreal(int real) {
		this->real = real;
	}

	void setcom(int com) {
		this->com = com;
	}

	// Getter functions
	int getreal() {
		return real;
	}

	int getcom() {
		return com;
	}

	// Increment operator
	Complex& operator++() {
		Complex temp;
		temp.real = real++;
		temp.com = com++;
		return temp;
	}

	// Addition function
	void add(Complex& C) {
		int temp_real;
		int temp_com;
		temp_real = real + C.getreal();
		temp_com = com + C.getcom();
		cout << "Sum is: ";
		if (temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if (temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}
	}

	// Subtraction function
	void subtract(Complex& C) {
		int temp_real;
		int temp_com;
		temp_real = real - C.getreal();
		temp_com = com - C.getcom();
		cout << "Difference is: ";
		if (temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if (temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}

	}

	// Multiply function
	void multiply(Complex& C) {
		int temp_real;
		int temp_com;
		temp_real = real * C.getreal();
		temp_com = com * C.getcom();
		cout << "Product is: ";
		if (temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if (temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}
	}

	// Divide function
	void divide(Complex& C) {
		int temp_real;
		int temp_com;
		temp_real = real / C.getreal();
		temp_com = com / C.getcom();
		cout << "Divided answer is: ";
		if (temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if (temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}
	}

	// == operator
	bool operator ==(const Complex& C) {
		bool flag;
		if (real == C.real && com == C.com) {
			flag = true;
		}
		else {
			flag = false;
		}
		return flag;
	}

	// != operator
	bool operator !=(const Complex& cn) {
		bool flag;
		if (real != cn.real || com != cn.com) {
			flag = true;
		}
		else {
			flag = false;
		}
		return flag;
	}

	// Destructor
	~Complex() {
		cout << "~Complex() called.\n";
		real = 0;
		com = 0;
	}

}; // end of class Complex

// Main starts here
int main() {
	system("Color B0");
	cout << "*****************************************************************" << endl;
	cout << "\t\t\tREAL AND COMPLEX NUMBERS C++ PROGRAMME" << endl;
	Complex C1;
	C1.input();
	cout << "1)";
	C1.output();
	cout << "-----------------------------------------------------------------" << endl;
	Complex C2(4, -6);
	cout << "2)";
	C2.output();
	cout << "-----------------------------------------------------------------" << endl;
	Complex C3(2, 4);
	cout << "3)";
	C3.output();
	cout << "-----------------------------------------------------------------" << endl;
	C2.add(C3);
	cout << "-----------------------------------------------------------------" << endl;
	C2.subtract(C3);
	cout << "-----------------------------------------------------------------" << endl;
	C2.multiply(C3);
	cout << "-----------------------------------------------------------------" << endl;
	C2.divide(C3);
	cout << "-----------------------------------------------------------------" << endl;
	if (C2 == C1) {
		cout << "Equal.\n";
	}
	else {
		cout << "Not equal.\n";
	}
	cout << "-----------------------------------------------------------------" << endl;
	if (C3 != C1) {
		cout << "Not equal.\n";
	}
	else {
		cout << "Equal.\n";
	}
	cout << "-----------------------------------------------------------------" << endl;
	cout << "\n";
	cout << "\t\t\tMain Ends Here." << endl;
	cout << "*****************************************************************" << endl;
	system("Pause");
	return 0;
}
