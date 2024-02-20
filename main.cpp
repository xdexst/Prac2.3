#include<iostream>
#include<fstream>

class Road {
public:
    double length;
    int width;
};

int main() {
    using namespace std;
    Road road;

    cout << "Test v0.1: Ok.\n";
	
	cout << "Before access: \n";
	
	cout << "Length: " << road.length << endl;
    cout << "Width: " << road.width << endl;
	road.length = 444.4;
    road.width = 444;
	 cout << "\nAfter access: \n";
	  ifstream fInLength("C:\\цифро-индустриальное общество\\02_02\\Test2_2\\length.txt");
    fInLength >> road.length;
    fInLength.close();
	  ifstream fInWidth("C:\\цифро-индустриальное общество\\02_02\\Test2_2\\width.txt");
    fInWidth >> road.width;
    fInWidth.close();
	 cout << "Length: " << road.length << endl;
    cout << "Width: " << road.width << endl;
    return 0;
}
