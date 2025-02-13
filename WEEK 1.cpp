//#include<iostream>
//#include<math.h>
//using namespace std;
//class Complex
//{
//private:
//	float re;
//	float im;
//public:
//	Complex(float r, float i) { re = r; im = i; }
//	Complex(float r) { re = r; im = 0.0; }
//	~Complex() {};
//	double Magnitude()
//	{
//		return sqrt(re * re + Imag() * Imag());
//	}
//	float real() { return re; } //return real part
//	float Imag() { return im; } //return imaginary part
//	Complex operator+(Complex b)
//	{
//		return Complex(re + b.re, im + b.im);
//	}
//	Complex operator=(Complex b)
//	{
//		re = b.re; im = b.im; return *this;
//	}
//};
//int main()
//{
//	Complex a(1.0, 1.0);
//	Complex* b = new Complex(5.0);
//	Complex c(0, 0);
//	cout << "a real = " << a.real() << "a imaginary = " << a.Imag() << endl;
//	cout << "b real = " << b->real() << "b imaginary = " << b->Imag() << endl;
//	c = a + (*b);
//	cout << "c real =" << c.real() << "c imaginary =" << c.Imag() << endl;
//	delete b;
//	return 0;
//}








//#include<iostream>
//using namespace std;
//template <class T>
//class mypair
//{
//	T a, b;
//public:
//	mypair(T first, T second)
//	{
//		a = first; b = second;
//	}
//	T getmax();
//};
//template<class T>
//T mypair<T>::getmax()
//{
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//int main()
//{
//	mypair <int> myobject(100, 75);
//	cout << myobject.getmax();
//	return 0;
//}







//#include<iostream>
//using namespace std;
//
//template<class T, int N>
//class mysequence
//{
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//};
//
//template <class T, int N>
//void mysequence<T, N>::setmember(int x, T value)
//{
//	memblock[x] = value;
//}
//
//template<class T, int N>
//T mysequence<T, N>::getmember(int x)
//{
//	return memblock[x];
//}
//
//int main()
//{
//	mysequence<int, 5> myints;
//	mysequence <double, 5> myfloats;
//
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//
//	cout << myints.getmember(0) << '\n';
//	cout << myfloats.getmember(3) << '\n';
//}






//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main(void)
//{
//	ofstream outFile;
//	outFile.open("fout.txt");
//
//	ifstream inFile("fin.txt");
//
//	char ch;
//	int count = 0;
//
//	while (inFile.get(ch))
//	{
//		outFile << ch;
//		count++;
//	}
//	outFile << "\n\n Character count= " << count << endl;
//
//	inFile.close();
//	outFile.close();
//
//	return 0;
//}







//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//class House {
//public:
//    string owner;
//    string address;
//    int bedrooms;
//    float price;
//
//    void readData() {
//        cout << "Enter Owner: ";
//        getline(cin, owner);
//
//        cout << "Enter Address: ";
//        getline(cin, address);
//
//        cout << "Number of Bedrooms? : ";
//        cin >> bedrooms;
//
//        cout << "Price: ";
//        cin >> price;
//        cin.ignore();  // Clear the newline character from input buffer
//    }
//
//    void displayData() const {
//        cout << left << setw(15) << owner 
//             << setw(20) << address 
//             << setw(10) << bedrooms 
//             << setw(10) << price << endl;
//    }
//};
//
//int main() {
//    House available[100];
//    int count = 0;
//    char choice;
//
//    do {
//        if (count >= 100) {
//            cout << "House limit reached!" << endl;
//            break;
//        }
//        
//        available[count].readData();
//        count++;
//
//        cout << "\nEnter another house? (Y/N): ";
//        cin >> choice;
//        cin.ignore();  // Clear the newline character from input buffer
//    } while (choice == 'Y' || choice == 'y');
//
//    cout << "\nThe output should look like:\n";
//    cout << left << setw(15) << "Owner" 
//         << setw(20) << "Address" 
        /* << setw(10) << "Bedrooms" 
         << setw(10) << "Price" << endl;

    for (int i = 0; i < count; i++) {
        available[i].displayData();
    }

    return 0;
}*/