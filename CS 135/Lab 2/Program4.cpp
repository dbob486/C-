// Daniel Garcia

#include <iostream>;
#include <iopmanip>;
using namespace std;
 
int main() {
	int american = 85;
	int modern = 57.50;
	int french = 127.75;
	int a;	//input for american
	int b;	//input for modern
	int c;	//input for french
	int totalA; //total amount for American
	int totalM;	//total amount for Modern
	int totalF;	//total amount for French
	int total; //total for all chairs
	cout << "Please input the number of American Coloniel Chairs sold " << endl;
	cin >> a;
	cout << "Please input the number of Modern Chairs sold " << endl;
	cin >> b;
	cout << "Please input the number of French Classical Chairs sold " << endl;
	cin >> c;
	totalA = american * a;
	totalM = modern * b;
	totalF = french * c;
	total = totalA + totalM + totalF;
	cout << "The total sales of American Coloniel chairs : " << totalA << endl;
	cout << "The total sales of Modern chairs : " << totalM << endl;
	cout << "The total sales of French Classical chairs : " << totalF << endl;
	cout << "The total sales of all chairs : " << total << endl;
	system("pause");
	return 0;
}
