//greatest and smallest number in set of numbers 
#include <iostream>
using namespace std;
int main(){
	int n;
	int i;
	float x;
	float max, min;
	cout << "How many numbers? " << endl;
	cin >> n;
	if (n < 0)
		cout << "invalid input" << endl;
	cout << "enter the numbers" << endl;
	cin >> x;
	max = x;
	min = x;
	for (i = 2; i <= n; i++)
	{
		cin >> x;
		if (max >= x){
			if (min >= x)
				min = x;
			
		}

		else max = x;
	}
	cout << "largest number is: " << max << endl;
	cout << "smallest number is:" << min << endl;
























}