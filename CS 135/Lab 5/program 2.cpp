/* Daniel Garcia
   CS 135
   Lab 5
   Program 2*/
   
#include <iostream>
#include <iomanip>

using namespace std;

void average(int[], int );
void highest(int[], int );
void lowest(int[], int );

int main (){
int count;
int temperature [50] { };
cout << "Please input the number of temperatures to be read";
cin >> count;
for(int i = 0; i < count; i++) {
   cout << "Input temperature " << i << ":" << endl; // The numerical place of the temperature
   cin >> temperature[i]; //temperature at i
 }

average(temperature , count);
highest(temperature , count);
lowest(temperature , count);


void average(int a[], int b) { //finds the average temperature of them all
	int avg;
	for(int i = 0; i < b; i++) {
	   avg +=a[i];
	}
	avg /=b;
	cout << "The average temperature is " << avg;
}
 
void highest(int h[], int c) { // finds the highest temperature of them all
   int high = 0;
   for(int i = 0; i < c; i++) {
      if(h[i] > high) {
		 high = h[i];
	  }
	}
	cout << "The Highest temperature is " << high;
}

void lowest(int l[], int d) { // finds the lowest temperature of them all
	int low = 100;
   for(int i = 0; i < d; i++) {
      if(l[i] < low) {
		 low = l[i];
	  }
	}
	cout << "The lowest temperature is " << low;
}
	
}
