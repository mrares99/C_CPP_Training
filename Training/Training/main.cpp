#include <iostream>
#include <string>
#include <memory>

#include "Person.h"
#include "Person.cpp" //I know it is wrong, but without doing this, I have a linker issue

class Test {
private:
	int value;
public:
	explicit Test(int value) {
		this->value = value;
	}
	
	int getValue() {
		return value;
	}
};

void func(Test test) {
	int i = test.getValue();
}

int main()
{
	
	func(2);

	return 0;
}