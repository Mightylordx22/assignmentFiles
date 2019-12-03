// <-- Imports -->

#include <iostream>
#include <string>

// <-- Namespaces -->

using namespace std;

// <-- Functions -->

// A simpler way to use cout that I made
void print(const string& arg) {
	cout << arg << endl;
}

// Euclidean algorithm
void euclid(int a, int b) {
	int c = a % b; // set c to the mod of a and b
	while (c != 0) {
		// Swaps the integers and mods them
		a = b;
		b = c;
		c = a % b;
	}
	// outputs the HCF
	print(to_string(b));
}

// <-- Main Program -->

int main() {
	euclid(45, 50);
	euclid(27, 90);
	euclid(88, 26);
	euclid(54, 87);
	euclid(16, 24);
	euclid(77, 28);
	euclid(42, 72);
	return 0;
}