#include <iostream>

using namespace std;

struct plane{
   int landed;
   int departed;
   int greatest;
   int least;
};

int totalDeparted(plane arr[]){
   int total = 0;
   for(int i = 0; i < 12; ++i){
       total += arr[i].departed;
   }
   return total;
}

int totalLanded(plane arr[]){
   int total = 0;
   for(int i = 0; i < 12; ++i){
       total += arr[i].landed;
   }
   return total;
}

void getGreatest(plane arr[], int &m, int &g){
   g = -55555;
   for(int i = 0; i < 12; ++i){
       if(g < arr[i].greatest){
           g = arr[i].greatest;
           m = i + 1;
       }
   }
}

void getLeast(plane arr[], int &m, int &l){
   l = 55555;
   for(int i = 0; i < 12; ++i){
       if(l > arr[i].least){
           l = arr[i].least;
           m = i + 1;
       }
   }
}

int main(){
   plane arr[12];
   for(int i = 0; i < 12; ++i){
       cout << "Enter details for month " << (i + 1) << endl;
       cout << "Total number of planes that landed: ";
       cin >> arr[i].landed;
       cout << "Total number of planes that departed: ";
       cin >> arr[i].departed;
       cout << "Greatest number of planes that landed in a given day that month: ";
       cin >> arr[i].greatest;
       cout << "Least number of planes that landed in a given day that month: ";
       cin >> arr[i].least;
       cout << endl;
   }
   cout << "the average monthly number of departing planes: " << totalDeparted(arr) / 12.0 << endl;
   cout << "the total number of Departed planes for the year: " << totalDeparted(arr) << endl;
   cout << "the total number of Landed planes for the year: " << totalLanded(arr) << endl;
   cout << "least number of planes that landed on any one day" << endl;
   int m, d;
   getLeast(arr, m, d);
   cout << "day: " << d << endl;
   cout << "Month: " << m << endl << endl;
   getGreatest(arr, m, d);
   cout << "day: " << d << endl;
   cout << "Month: " << m << endl << endl;
   return 0;
}