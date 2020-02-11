// Daniel Garcia

#include <iostream>;
#include <iopmanip>;
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main() {
	int area = LENGTH + WIDTH;
	int perimeter = LENGTH + LENGTH + WIDTH + WIDTH;
	cout << "The area of the rectangle is " << area << endl;
	cout << "The perimeter of the rectangle is " << perimeter << endl;
	system("pause");
	return 0;

}
