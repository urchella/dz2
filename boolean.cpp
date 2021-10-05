/*Шульга Юрий П43021*/
#include <iostream>
using namespace std;
int main(){


 /* Boolean 1
 Дано целое число A. Проверить истинность высказывания: «Число A является положительным».
 int A;
 bool res;
 cout << boolalpha;
 cin >> A;
 res = A > 0;
 cout << res << endl;
*/

/* Boolean 2
Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».
 int A;
 bool res;
 cout << boolalpha;
 cin >> A;
 res = A % 2 ==1;
 cout << res << endl;
*/

/* Boolean 3
Дано целое число A. Проверить истинность высказывания: «Число A является четным».
 int A;
 bool res;
 cout << boolalpha;
 cin >> A;
 res = A % 2 ==0;
 cout << res << endl;
*/



/* Boolean 4
Даны два целых числа: A, B. Проверить истинность высказывания:«Справедливы неравенства A > 2 и B ≤ 3».
int A;
int B;
 bool res;
 cout << boolalpha;
 cin >> A >> B;
 res = A > 2 && B<=3;
 cout << res << endl;
*/


/* Boolean 5
Даны два целых числа: A, B. Проверить истинность высказывания:«Справедливы неравенства A ≥ 0 или B < −2».
int A;
int B;
 bool res;
 cout << boolalpha;
 cin >> A >> B;
 res = A >= 0 || B < -2;
 cout << res << endl;
*/


/* Boolean 6
Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C
int A;
int B;
int C;
 bool res;
 cout << boolalpha;
 cin >> A >> B >> C;
 res = A < B < C;
 cout << res << endl;
*/



/* Boolean 7
Даны три целых числа: A, B, C. Проверить истинность высказывания: «Число B находится между числами A и C»
int A;
int B;
int C;
 bool res;
 cout << boolalpha;
 cin >> A >> B >> C;
 res = A < B < C;
 cout << res << endl;
*/



/* Boolean 8
Даны два целых числа: A, B. Проверить истинность высказывания:«Каждое из чисел A и B нечетное».
int A;
int B;
 bool res;
 cout << boolalpha;
 cin >> A >> B;
 res = A % 2 == 1 && B % 2 == 1;
 cout << res << endl;
*/



/* Boolean 9
 Даны два целых числа: A, B. Проверить истинность высказывания:«Хотя бы одно из чисел A и B нечетное».
int A;
int B;
 bool res;
 cout << boolalpha;
 cin >> A >> B;
 res = A % 2 == 1 || B % 2 == 1;
 cout << res << endl;
*/



/* Boolean 10
 Даны два целых числа: A, B. Проверить истинность высказывания: «Ровно одно из чисел A и B нечетное».
int A;
int B;
 bool res;
 cout << boolalpha;
 cin >> A >> B;
 res = A % 2 == 1  && B % 2 !=1;
 cout << res << endl;
*/


/* Boolean 11
 Даны два целых числа: A, B. Проверить истинность высказывания: «Числа A и B имеют одинаковую четность».
int A;
int B;
 bool res;
 cout << boolalpha;
 cin >> A >> B;
 res = ((A % 2 == 0)  && (B % 2 == 0)) ||((A % 2 == 1) && (A % 2 == 1));
 cout << res << endl;
*/


/* Boolean 12
 . Даны три целых числа: A, B, C. Проверить истинность высказывания: «Каждое из чисел A, B, C положительное».
int A;
int B;
int C;
 bool res;
 cout << boolalpha;
 cin >> A >> B >> C;
 res = A > 0 && B > 0 && C > 0;
 cout << res << endl;
*/


/* Boolean 13
  Даны три целых числа: A, B, C. Проверить истинность высказывания: «Хотя бы одно из чисел A, B, C положительное».
int A;
int B;
int C;
 bool res;
 cout << boolalpha;
 cin >> A >> B >> C;
 res = A > 0 || B > 0 || C > 0;
 cout << res << endl;
*/


/* Boolean 14
  Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно одно из чисел A, B, C положительное».
int A;
int B;
int C;
 bool res;
 cout << boolalpha;
 cin >> A >> B >> C;
 res = ((! (A > 0)) && (! (B > 0)) &&   (C > 0))|| ((! (A > 0)) &&  (B > 0) && (! (C > 0))) || ( (A > 0) && (! (B > 0)) && (! (C > 0)))  ;
 cout << res << endl;
*/


/*Boolean 15
  Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно два из чисел A, B, C являются положительными»
int A;
int B;
int C;
 bool res;
 cout << boolalpha;
 cin >> A >> B >> C;
 res = ((! (A > 0)) &&  (B > 0) &&   (C > 0))|| ( (A > 0) && (! (B > 0)) && (C > 0)) || ( (A > 0) &&  (B > 0) && (! (C > 0)))  ;
 cout << res << endl;
*/


/*Boolean 16
  Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».

int A;
 bool res;
 cout << boolalpha;
 cin >> A;
 res = A > 9 && A < 100 && A % 2 == 0 ;
 cout << res << endl;
*/


/*Boolean 17
 Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным».
int A;
 bool res;
 cout << boolalpha;
 cin >> A;
 res =  A > 99 && A < 1000 && A % 2 == 1   ;
 cout << res << endl;
*/































}
