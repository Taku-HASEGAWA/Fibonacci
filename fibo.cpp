#include <iostream>
#include <climits>

int main(void){
  unsigned long long f1 = 1;
  unsigned long long f2 = 1;
  unsigned long long f, g;
  int N = 300;
  std::cout << f1 << std::endl;
  std::cout << f2 << std::endl;
  f = f1 + f2;
  std::cout << f << std::endl;
  g = f2 + f;
  std::cout << g << std::endl;
  for(int i=0; i<N; i++){
    f = f + g;
    if(f>ULLONG_MAX*0.95){
      std::cout << f << std::endl;
      std::cout << "MAX !!" << std::endl;
      break;
    }
    g = g + f;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
  }
  return 0;
}
