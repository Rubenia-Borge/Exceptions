
#include <iostream>

class DivideByZeroError{
    public:
      DivideByZeroError() : message("Divide by zero") {}
      void printeMessage() const { std::cout << message;}
      
    private:
      const char *message;
};

float quotient (int num1, int num2){
    if (num2 == 0)
      throw DivideByZeroError();
      
    return (float) num1 / num2;
}

int main(){
    
      int number1, number2;
      
      std::cout << "Enter two integer numbers: ";
      
      std::cin >> number1 >> number2;
      
      try{
          
          float result = quotient(number1, number2);
          
          std::cout << "The quotient is: " << result << std::endl;
      }
      catch (DivideByZeroError error){
          
          std::cout << "ERROR: ";
          error.printeMessage();
          std::cout << std::endl;
          
          return 1;
      }
      
      return 0;
      
}
