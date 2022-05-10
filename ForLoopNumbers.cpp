#include <iostream>
#include <cstdio>

int main(){

  int a, b;
    
  std::string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
  std::cin >> a >> b;
    
  for(int i = a; i <= b; ++i){
        
    if(i > 9){
      i % 2 == 0 ? std::cout << "even\n" : std::cout << "odd\n";
    }

    else{
      std::cout << num[i] << "\n";
    }

  }    

  return 0;

}