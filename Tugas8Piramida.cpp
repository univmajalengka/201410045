//Source code Setengah Piramidaa
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Masukkan panjang Piramida";
	cin >> n;
	cout << "Piramida\n";
	for (int i = 1; i < n; i++){
		for (int j = 1; j <= i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
}
