#include <iostream>
using namespace std;
class SavingsAccount{
	private:
        long dollars,cents;
    public:
        SavingsAccount()
           {dollars=0;
           cents=0;
            }
        SavingsAccount(int newDol, int newCent)
           {dollars=newDol;
           cents=newCent;
            }
        void deposit (int depDol,int depCent)
           {dollars+=depDol;
            cents+=depCent;
            int extra=cents/100;
            dollars+=extra;
            cents=cents-extra*100;
            }
        void withdrawal(int wdDol, int wdCent)
        {int extra;
         if(wdCent>100)
            {extra=wdCent%100;
            wdDol+=extra;
            wdCent-=(wdCent/100);
            }
         if(wdDol>dollars)
             {cout<<"insufficient funds\n";
             return;
             }
         dollars-=wdDol;
         cents-=wdCent;
         if(cents<0)
             {dollars--;
             cents+=100;
            }
         }
        double showBalance()
        {
			double amount=dollars+cents/100;
        return amount;
               }
}