#include <iostream>
using namespace std;


int main() {
	cout << "P3\n" << 256 << " " << 256 << "\n255\n"; 
	for(int r = 0; r < 256; ++r) {
		for(int g = 0; g<256; ++g) {
			cout << r << " " << g << " " << 120 << "\n"; 
		}
	}
}

