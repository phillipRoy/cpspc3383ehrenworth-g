#include <iostream>
#include <string>
using namespace std;

class PPM {
	public:
	PPM();
	PPM(int, int); 
	~PPM();
	void makeHead();
	void makeBody();
	friend ostream& operator<<(ostream& os, const PPM& ppm); 
	private:
	int imageSideLength;
	int blueValue;
	string body; 
};