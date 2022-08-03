#include <iostream>
using namespace std;
int gcd(int x, int y){
    if (y == 0)
       return x;
    else
       return gcd(y, x % y);
}
int main(){
   int x, y;
   cout << "Enter two positive integers" << endl;
   cout << "X: ";
   cin >> x;
   cout << "Y: ";
   cin >> y;
   cout << "G.C.D. of " <<x << " & " <<  y << " is: " << gcd(x, y);
   return 0;
}
