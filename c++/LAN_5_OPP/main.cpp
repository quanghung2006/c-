#include <iostream>
#include <string>
using namespace std;

class O_to {       // The class
  public:       
    string name;  // Attribute (string variable)      // Access specifier
    string color;        // Attribute (int variable)

};

int main() {
  O_to my_oto_1;  // Create an object of MyClass
  O_to my_oto_2;  // Create an object of MyClass

  // Access attributes and set values
  my_oto_1.name ="toyota";
  my_oto_1.color = "do";
  
 
  
  my_oto_2.name = "hon da";
  my_oto_2.color = "xanh";

  // Print values
  cout << my_oto_1.name << "\n"; 
  cout << my_oto_1.color<< "\n"; 
  
  
  cout << my_oto_2.name << "\n"; 
  cout << my_oto_2.color; 
  return 0;
}

