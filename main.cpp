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