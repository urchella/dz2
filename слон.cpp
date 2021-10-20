/*Шульга Юрий П43021*/
#include <iostream>
using namespace std;
int main(){
 setlocale(LC_ALL, "Russian");
int x1;
int x2;
int y1;
int y2;
cin >> x1 >> x2 >> y1 >> y2;
if (abs(x1 - x2) == (abs(y1 - y2)) ){cout << "может";}
else {cout << "не может";}







}