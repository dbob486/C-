#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
void readBytes (fstream&, long, int);

void readBytes (fstream& file, long offset, int n, string str) {
	   long x;
	   int count = 0;
	   char ch;
	   for(x = offset; x <= n; x++)
	   {
		  file.seekg(x, ios::beg);
		  ch = file.get();
		  str = str + ch;
	   }
	   cout << str;
	  return 0;
   }   