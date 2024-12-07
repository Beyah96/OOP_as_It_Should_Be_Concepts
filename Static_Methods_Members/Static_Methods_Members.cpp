#include <iostream>
using namespace std;

class clsTest {
public:
	short static SharedFunction() {
		return 10;
	}
	short NotSharedMethod() {
		return 5;
	}
};

int main() {
	cout << clsTest::SharedFunction() << endl;
	// we can't call none shared function from the class directly, 
	//we should use an object to call it:
	//cout << clsTest::NotSharedMethod() << endl; //is not working
	clsTest ClassA;
	cout << ClassA.SharedFunction() << endl;
	cout << ClassA.NotSharedMethod() << endl;
	return 0;
}