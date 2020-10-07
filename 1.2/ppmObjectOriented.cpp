#include "ppmObjectOriented.hpp"
#include <iostream>
#include <string>
using namespace std;

//Default Contstructor
PPM::PPM()
	: imageSideLength{100},
	blueValue{100}
{}

//User Defined Constructor
PPM::PPM(int lhs, int rhs)
	: imageSideLength{lhs}, 
	blueValue{rhs}
{}

//Default Deconstructor
PPM::~PPM()
{}

void PPM::makeHead() {
	body += ("P3\n" + to_string(imageSideLength) + " " + to_string(imageSideLength) + "\n255\n");
}

void PPM::makeBody() {
	for(int r = 0; r < imageSideLength; ++r) {
		for(int g = 0; g < imageSideLength; ++g) {
			float ir = (float(r)/float(imageSideLength))*255.99;
			float ig = (float(g)/float(imageSideLength))*255.99;
			body += to_string(int(ir)) + " " + to_string(int(ig)) + " " + to_string(blueValue) + "\n"; 
		}
	}
}

ostream& operator<<(ostream& os, const PPM& ppm) {
	cout << ppm.body; 
}