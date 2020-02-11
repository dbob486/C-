#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
   	string filename =  "numbers.dat";
	int n, groupNum = 0, num;
	ifstream inFile;
	inFile.open();
	inFile >> n;
	while(!inFile.eof())
	{
		double sum = 0;
		for(int i = 0; i < n; i++)
		{
			infile >> num;
			sum += num;
		}
		cout << "\nAverage for group " << ++groupNum << " " << (sum/n) << endl;
		inFile >> n;
	}
	inFile.close();
	return 0;
}
