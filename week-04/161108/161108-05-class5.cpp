  // The market price of the houses is 400 EUR / square meters
  // Create a constructor for the House class that takes it's address and area.

#include <iostream>
#include <string>

using namespace std;

class House {
  private:
      string address;
      unsigned int area;
      unsigned int price;


  public:
      House (string a = "", unsigned int b = 0) {
          SetAddress (a);
          SetArea (b);
        }

    unsigned int get_price() {
      return this->price;
    }

    void SetAddress (string x) {
      this->address = x;
    }
    string GetAddress () {
      return this->address;
    }
    void SetArea (unsigned int y) {
      this->area = y;
        }
    unsigned int GetArea () {
      return this->area;
    }

};

int main() {

  House houseObject("Andrassy 66", 349);
  cout << houseObject.GetAddress()<< " " << houseObject.GetArea()<< endl;

  return 0;
}
