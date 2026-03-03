#include <iostream>
using namespace std;
class Rectangle
{
  private:
    int length;
    int breadth;

  public:
    //constructor function = to initialize 
    Rectangle (int l, int b);
    
    //area function. known as facilitators = functions that work
    int area();
    int perimeter();

    //get length
    int getLength()  //accessor
    {
        return length;
    }
    //change length function
    void setLength(int l) // mutator
    {
        length=l;
    }

   // ~Rectangle(); //destructor
};


//now implementing these class functions using scoap resolution
Rectangle ::Rectangle(int l, int b){
    length =l;
    breadth=b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

//Rectangle::~Rectangle(){}

int main(){
    Rectangle r(10,5);

    cout << "area: " << r.area() <<endl;
    cout << "perimeter: " << r.perimeter()<<endl;
    r.setLength(7);
    cout << "length: " << r.getLength()<<endl;

}