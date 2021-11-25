/*Шульга Юрий П43021*/
#include <iostream>
#include <ctime>
using namespace std;
void fillRandom(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		fa[i] = rand() % 101 - 50;
		cout << fa[i] << ' ';
	}
}
void bubleSort(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		for (int j = 0; j < fn - 1; j++) {
			if (fa[j] > fa[j + 1]) {
				swap(fa[j], fa[j + 1]);
			}
		}
	}
}
void print(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		cout << fa[i] << ' ';
	}
}
void mas(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		fa[i] = fa[i];
	}

}
int powerA3(int fa) {
	int b = fa * fa * fa;
	return b;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	cout << powerA3(a) << endl;
}








































/*
	const int n = 5;
	const int m = 2;
	const int k = 7;
	int a[n];
	int b[m];
	int c[k];
	int temp = 0;
	srand(time(0));
	fillRandom(a, n); 

	cout << endl;

	fillRandom(b, m);

	cout << endl;

	for (int i = 0; i < n; i++) {
		c[i] = a[i];
	}
	for (int i = n; i < k; i++) {
		c[i] = b[i - 5];
	}
	cout << endl;
	bubleSort(c, k);
	print(c, k);

	*/





	


	






	



	
	
	
	
	



  






