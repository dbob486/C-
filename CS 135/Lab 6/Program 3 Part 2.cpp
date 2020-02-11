#include <iostream>
using namespace std;
class Bank
{int dollars,cents;
public:
   Bank()
   {dollars=0;
   cents=0;
   }  
      
   Bank(int d,int c)
   {
   dollars=d;
   cents=c;
   }  
   void deposit(int d,int c)
  
   {

cents += c;
   while(cents>100){
       dollars++;
       cents -= 100;
   }
   dollars +=d;
}

  
   }
   void widthdraw(int d,int c)
   {

if(dollars<d){
       cout <<" insufficents fund please enter less amount." << endl;
   }
   else if(dollars ==d && cents < c){
       cout <<insufficents money please enter less amount." << endl;
   }
   else{
       cents -= c;
       if(cents <0){
           cents += 100;
           dollars--;
       }
       dollars -= d;
   }
      

   cout<<dollars;
   cout<<cents;
   }
  
  
   };
int main() {
   Bank bank2,bank1(99,88);
  
   bank2.deposit(8,50);
   bank1.widthdraw(9,89);
   
   return 0;
}