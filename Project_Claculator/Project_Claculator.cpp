#include <iostream>

using namespace std;

class clsCalculator {
private:
	short _Number = 0;
	short _Result = 0;
	string _Operation;
public:
	void Clear() {
		_Number = 0;
		_Operation = "Clear ";
		_Result = 0;
	}
	
	void Add(short Number) {
		_Number = Number;
		_Operation = "Adding ";
		_Result += _Number;
	}
	void Substract(short Number) {
		_Number = Number;
		_Operation = "Substracting ";
		_Result -= _Number;
	}
	void Divide(short Number) {
		_Number = (Number != 0) ? Number : 1;
		_Operation = "Dividing ";
		_Result /= _Number;
	}
	void Multiply(short Number) {
		_Number = Number;
		_Operation = "Multiplying ";
		_Result *= _Number;
	}

	void PrintResult() {
		cout << "Result After " << _Operation << _Number << " is : " << _Result << endl;
	}
};

int main() {
	clsCalculator Calculator;

	Calculator.Clear();
	Calculator.PrintResult();
	
	Calculator.Add(10);
	Calculator.PrintResult();
	
	Calculator.Add(100);
	Calculator.PrintResult();
	
	Calculator.Substract(20);
	Calculator.PrintResult();
	
	Calculator.Divide(0);
	Calculator.PrintResult();
	
	Calculator.Multiply(3);
	Calculator.PrintResult();

	Calculator.Clear();
	Calculator.PrintResult();

	system("pause > 0");
	return 0;
}