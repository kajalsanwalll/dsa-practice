class Rectangle
{
  private:
    int length;
    int breadth;

  public:
    //constructor function = to initialize 
    Rectangle (int l, int b){
        length =l;
        breadth = b;
    } 
    
    //area function
    int area(){
        return length*breadth;
    }

    //change length function
    void changeLength(int l){
        length=l;
    }
};

int main(){
    Rectangle r(10,5);

    r.area();
    r.changeLength(7);

}