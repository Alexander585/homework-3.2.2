#include <iostream>
#include <string.h>
class Counter {
private:
    double num1;
  

public:
    Counter() : num1(0)  {}

    
    void set(double n1 ) {
       num1 = n1;
        
    }
  
    double add() {
      return   num1++;
    }



    double subtract_1_2() {
       return num1--;
    }
    double ret_num()  {
        return num1;
    }
 
};

int main() {
    
       

        setlocale(LC_ALL, "RUS");
        double input1;
        std::string input2;
        char vopr;

        Counter counter;
        std::cout << "Вы хотите указать начальное значение счётчика? Введите y:";
        std::cin >> vopr;
        if (vopr == 'y') {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> input1;
            counter.set(input1);
          
            
        }
      
        while (true)
        {
           
                
            std::cout << "Введите команду ('+', '-', '=' или 'x'):";
            std::cin >> input2;
           


            if (input2 == "+") {
               
                counter.add();
            }
            if (input2 == "-") {
               
                counter.subtract_1_2();
            }
            if (input2 == "=") {
                std::cout << counter.ret_num() << std::endl;
                

            }
            if (input2 == "x") {
                
                std::cout << "До свидания!" << std::endl;
                return 0;

            }




        }
    
}

