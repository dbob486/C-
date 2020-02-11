#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	ifstream myFile;
	string name;
	cout << "Write a String" << endl;
	myFile.open();
	myFile >> name;
	myFile.close();
	return 0;
}