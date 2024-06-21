#include <iostream>
using namespace std;
class Distance {
   private:
   int feet; 
   int inches; 
   public:
   Distance() {
      feet = 0;
      inches = 0;
   }
   Distance(int f, int i) {
      feet = f;
      inches = i;
   }
   friend ostream &operator<<( ostream &output, const Distance &D ) {
      output << "F : " << D.feet << ", I : " << D.inches;
      return output;
   }
   friend istream &operator>>( istream &input, Distance &D ) {
      input >> D.feet >> D.inches;
      return input;
   }
};
int main() {
   Distance D1(11, 10), D2(5, 11), D3;
   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;
   return 0;
}
// Enter the value of object : 
// 70
// 10
// First Distance : F : 11, I : 10
// Second Distance :F : 5, I : 11
// Third Distance :F : 70, I : 10


// === Code Execution Successful ===