#include <iostream>

class Simple{
public:
void operator()(int i){
std::cout << i << std::endl;
}
};

int main(){
Simple s;
s(34);
}
