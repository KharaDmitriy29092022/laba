#include <iostream>
using namespace std;

int main() {
 cout << "Lab Work1\n";
 cout << "Task 1" << endl;
 int A=0, B=0, C=0;
 cout << "A:";
 cin >> A;
 cout << "B:";
 cin >> B;
 cout << "C:";
 cin >> C;
 A = A + B + C;
 B = A - B - C;
 C = A - B - C;
 A = A - B - C;
 cout << "After swap\n" << "A:" << A << "\nB:" << B << "\nC:" << C << endl;
 cout << "Task 2" << endl;
 double U=0, V=0, T1=0, T2=0, S = 0;
 cout << "U:";
 cin >> U;
 cout << "V(U>V):";
 cin >> V;
 if (U>V)
 {
 cout << "T1:";
 cin >> T1;
 cout << "T2:";
 cin >> A;
 S = V * T1 + (V - U) * T2;
 cout << "Way:" << S<<endl;
 }
 else
 {
  cerr << "U<V";
 }
 system("pause");
 return 0;
}