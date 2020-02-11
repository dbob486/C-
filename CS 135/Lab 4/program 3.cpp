/* Daniel Garcia
   CS 135
   Lab 5
   Program 4*/
   
#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double scores[], int numScores);

int main (void){
 double *scores, //To dynamically allocate an array
 total = 0.0, 
 average; 
 int numScores, // for test scores
 scores = new double[numScores];
 count; 

 cout << "Please input the number of scores ";
 cin >> numScores;
 cout << "Please enter a score.\n";
 for (count = 0; count < numScores; count++){
  cout << "Test Score " << (count + 1) << ": ";
  cin >> scores[count];
 }

 //Calculate the total of the scores
 for (count = 0; count < numScores; count++){
  total += scores[count];
 }

 //Calculate the average test score
 average = total / numScores;

 //Display the results
 cout << fixed << showpoint << setprecision(2);
 cout << "Average score is: " << average << endl;


 bubbleSort(scores,numScores);
 for (count = 0; count < numScores; count++){
  cout<<"score "<<(count+1)<<": "<<scores[count]<<endl;
 }


 //Free dynamically allocated memory
 delete [] scores;
 scores = 0; //Make scores point to null.
 cin.ignore(INT_MAX, '\n');
 cin.ignore(INT_MAX, '\n');

 return 0;
}


void bubbleSort(double scores[], int numScores){
 bool exchanges;
 do{
  exchanges = false; // assume no exchanges
  for(int i = 0; i < numScores - 1; i++){
   if(scores[i] > scores[i + 1]){
    double temp = scores[i];
    scores[i] = scores[i+1];
    scores[i+1] = temp;
    exchanges = true; // after exchange, must look again
   }
  }
 }while(exchanges);
}