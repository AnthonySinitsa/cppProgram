#include <iostream>

// Provide the definition for IntPair and the print() member function here
struct IntPair {
	int p1;
	int p2;
	void print() {
		std::cout << "Pair(" << p1 << ", " << p2 << ")\n";
	}

	bool isEqual(IntPair a) {
		return (p1 == a.p1) && (p2 == a.p2);
	}
};

int main()
{
	IntPair p1{ 1, 2 };
	IntPair p2{ 3, 4 };

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

	return 0;
}