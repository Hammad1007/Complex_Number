#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

class Complex {
private:
	int real;
	int com;
public:
	Complex() {
		cout << "Constructor() called.\n";
		real = 0;
		com = 0;
	}

	Complex(int real, int com) {
		this->real = real;
		this->com = com;
	}

	Complex(Complex &C) {
		real = C.real;
		com = C.com;
	}

	friend ostream & operator<<(ostream &out, const Complex &cn) {
		out << "Real part is: " << real << endl;
		out << "Imaginary part is: " << com << endl;
		return out;
	}

	friend istream &operator>>(istream &in, Complex &cn) {
		cout << "Enter the real part: ";
		in >> cn.real;
		cout << "Enter the imaginary part: ";
		in >> cn.com;
		return in;
	}

	void input() {
		cout << "Enter the real number: ";
		cin >> real;
		cout << "Enter the imaginary part: ";
		cin >> com;
	}

	void output() {
		// char ch = '+';
		// char ch1 = '-';
		cout << "The number is: ";
		if(com < 0) {
			cout << real << " + " << "(" << com << ")" << "i" << endl;
		}
		else if(com == 0) {
			cout << real << endl;
		}
		else {
			cout << real << " + " << com << "i" << endl;
		}
	}

	void setreal(int real) {
		this->real = real;
	}

	void setcom(int com) {
		this->com = com;
	}

	int getreal() {
		return real;
	}

	int getcom() {
		return com;
	}

	Complex & operator++() {
		Complex temp;
		temp.real = real++;
		temp.com = com++;
		return temp;
	}

	void add(Complex & C) {
		int temp_real;
		int temp_com;
		temp_real = real + C.getreal();
		temp_com = com + C.getcom();
		cout << "Sum is: ";
		if(temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if(temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}
	}

	void subtract(Complex & C) {
		int temp_real;
		int temp_com;
		temp_real = real - C.getreal();
		temp_com = com - C.getcom();
		cout << "Difference is: ";
		if(temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if(temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}

	}

	void multiply(Complex & C) {
		int temp_real;
		int temp_com;
		temp_real = real * C.getreal();
		temp_com = com * C.getcom();
		cout << "Product is: ";
		if(temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if(temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}
	}

	void divide(Complex & C) {
		int temp_real;
		int temp_com;
		temp_real = real / C.getreal();
		temp_com = com / C.getcom();
		cout << "Divided answer is: ";
		if(temp_com < 0) {
			cout << temp_real << " + " << "(" << temp_com << ")" << "i" << endl;
		}
		else if(temp_com == 0) {
			cout << temp_real << endl;
		}
		else {
			cout << temp_real << " + " << temp_com << "i" << endl;
		}
	}

	bool operator equal(const Complex & C) {
		bool flag;
		if(real == C.real && com == C.com) {
			flag = true;
			cout << "Equal numbers." << endl;
		}
		else {
			flag = false;
			cout << "Not equal." << endl;
		}
		return flag;
	}

	bool operator !=(const Complex &cn) {
		bool flag;
		if(real == cn.real || com == cn.com) {
			flag = true;
			cout << "They are not equal.";
		}
		else {
			flag = false;
			cout << "They are equal.";
		}
		return flag;
	}

	~Complex() {
		cout << "Destructor called().\n";
		real = 0;
		com = 0;
	}

};


int main() {
	system("Color 44");
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
	C2.equal(C1);
	cout << "-----------------------------------------------------------------" << endl;
	cout << "\n";
	cout << "\t\t\tMain Ends Here." << endl;
	cout << "*****************************************************************" << endl;
	Sleep(100);
	system("Pause");
	return 0;
}