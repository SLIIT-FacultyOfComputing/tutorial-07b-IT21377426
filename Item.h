// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      
      
      Item ();//1. Default Constructor
      Item (int pitemCode , float punitPrice);
      void setDiscount(float pdiscount); //2. Overloaded Constructor
      ~Item(); //3. Destructor
      float getDiscount();
      float discountedPrice();
      void display(); 
};
