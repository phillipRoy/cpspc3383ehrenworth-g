#include "ppmObjectOriented.hpp"
#include <string>
using namespace std;

int main() {
	//Create default PPM
	PPM defaultPPM;
	
	//Create User Defined PPM
	PPM myPPM(255, 120);
	
	//Creating Headers for each PPM
	defaultPPM.makeHead(); 
	myPPM.makeHead();
	
	//Creating Body for each PPM
	defaultPPM.makeBody();
	myPPM.makeBody();
	
	//Printing out the PPM
	cout << myPPM; 
	
	return 0; 
}