#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
   string filename = "numbers.dat";
   ofstream outfile;
   outfile.open();
   outfile << 5 << " " << 96 << " " << 87 << " " << 78 << " " << 93 << " " << 21 << " " << 4 << " " << 92
           << " " << 82 << " " << 85 << " " << 87 << " " << 6 << " " << 72 << " " << 69 << " " << 85
		   << " " << 87 << " " << 6 << " " << 72 << " " << 69 << " " << 85 << " " << 75 << " " << 81
   	       << " " << 73;
		   }
   outfile.close();
   return 0;