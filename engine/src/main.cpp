#include <iostream>
#include <thread>

void foo() {
  std::cout << "hello" << std::endl;
}

int main(int argc, char *argv[])
{
  std::thread t(foo);
  t.join();
	std::cout << "Hello world!" << std::endl;
}