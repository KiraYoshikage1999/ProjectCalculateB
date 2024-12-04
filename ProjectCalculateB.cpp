//Project Calculator with functional like in engineer calculator of Windows.
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

//#include <CalculationsFunc.h>
//#include <HeaderTEST.h>

class MathFunctions {
	int firstNum;
	int secondNum;
	char operationSymbol;
	int amountOfValues;
	string* memoryArrey = new string[amountOfValues];
	int priorityArrey[4] = { 0 , 1 , 2 , 3};
public:

	MathFunctions() {
		amountOfValues = 0;
		
	}



	// Metods Accesors Get
	int GetFirstNum() {
		return this->firstNum;
	}

	int GetSecondNum() {
		return this->secondNum;
	}

	char GetOperationSymbol() {
		return this->operationSymbol;
	}

	// Metods Accesors Set
	void SetFirstNum(int firstNum) {
		this->firstNum = firstNum;
	}

	void SetSecondNum(int secondNum) {
		this->secondNum = secondNum;
	}

	void SetOperationChar(char operationSymbol) {
		this->operationSymbol = operationSymbol;
	}
	//---------------------
	void MathOperations(char operationSymbol, int firstNum, int secondNum) { // Math operations
		int result;

		//Можно использовать if но за условием проекта в котором желательно использовать все пройденные материалы, я сделаю с помощью оператора множественного выбора.

		switch (operationSymbol)
		{
		case '+':
			result = firstNum + secondNum;
			cout << "Result of Sum: " << result << endl;
			break;

		case '-':
			result = firstNum - secondNum;
			cout << "Result of Sum: " << result << endl;
			break;
		case '*':
			result = firstNum * secondNum;
			cout << "Result of Sum: " << result << endl;
			break;
		case '/':
			if (secondNum != 0 || firstNum != 0) {
				result = firstNum / secondNum;
				cout << "Result of Sum: " << result << endl;
				break;
			}
			else {
				cout << "Number can't be Zero , it's ruining math rules! Try again!" << endl;
			}

		case '^':
			result = firstNum ^ secondNum;
			cout << "Result of Sum: " << result << endl;
			break;



		case '|':
			float(result) = sqrt(firstNum);
			cout << "Result of Sum: " << result << endl;
			break;
		}
	}

	void AddOperandOrOperatorInMemory(string userCinValue) {


		string* tempArr = new string[this->amountOfValues];
		for (int i = 0; i < this->amountOfValues; i++) {
			tempArr[i] = this->memoryArrey[i];

		}

		delete[] this->memoryArrey;
		this->amountOfValues++;

		this->memoryArrey = new string[this->amountOfValues];

		for (int i = 0; i < this->amountOfValues - 1; i++) {
			this->memoryArrey[i] = tempArr[i];

		}

		delete[] tempArr;

		this->memoryArrey[this->amountOfValues - 1] = userCinValue;
	}

	// this function is made for extract from memoryArrey operands , operators(+, - ,* , /, ^, |) and strings(sin,log functions).
	void RecreatingOperandsOperators() {

		for (int i = 0; i < this->amountOfValues; i++) {
			

			//if (isdigit(memoryArrey[i])) {

			//}

			/*if (memoryArrey[i] == "+" || "-" || "*" || "/" || "^" || "|") {*/
			if ((memoryArrey[i] == "+") || (memoryArrey[i] == "-") || (memoryArrey[i] == "*") || (memoryArrey[i] == "/") || (memoryArrey[i] == "^") || (memoryArrey[i] == "|"))  {
				cout << "[=" << i << "] -- " << memoryArrey[i] << endl;
			}
			else if ((memoryArrey[i] == "0") || (memoryArrey[i] == "1") || (memoryArrey[i] == "2") || (memoryArrey[i] == "3") || (memoryArrey[i] == "4") || (memoryArrey[i] == "5") || (memoryArrey[i] == "6") || (memoryArrey[i] == "7") || (memoryArrey[i] == "8") || (memoryArrey[i] == "9")) {

			}
			else {
				
				cout << "[unknown] -- "  << endl;
			}

		}
	}

	void PrintInfoMemoryArr() {
		RecreatingOperandsOperators();
		for (int i = 0; i < amountOfValues; i++) {
			cout << "[" << i << "] -- " << memoryArrey[i] << endl;
		}
	}

};


struct FuncOperation {
public:
	/*void IfElseChooseFunc(string UserValue1) {
		if (UserValue1 == "sin") {

		}
		else( UserValue1 == "cos") {

		}
		else { UserValue1 == "tan" } {

		}
	}*/

};



int main()
{

	MathFunctions objMathFunc; // Creating object

	//declaration of variables
	int DebugNum1 = 0;
	int DebugNum2 = 0;
	char userOperation;
	string userCinValue;
	string userStringValue = "";
	string userStringValueSecond = "";
	string userStringValueThird = "";
	char userChooseOption = '0';
	//----------------
	//initialization of operator and first operand

	/*while (true) {*/


		/*cout << "Enter operand(1,2,3...) or operator (+,-,*,/,^,|<-(sqrt)): " << endl;
		cin >> userCinValue;
		for (int i = 0; i < userCinValue.length(); i++) {

			if (isdigit(userCinValue[i])) {
				userStringValue = userStringValue + userCinValue[i];
				DebugNum1++;
			}
			else if (isalnum(userCinValue[i])) {
				userStringValueSecond += userCinValue[i];
			}
			else if (userCinValue[i] == '+' || '-' || '*' || '/' || '^' || '|') {
				userStringValueThird = userCinValue[i];


			}*/


			/*}*/
			/*DebugNum2++;*/
			/*if (userStringValue != "") {
				objMathFunc.AddOperandOrOperatorInMemory(userStringValue);
				userStringValue = "";
			}
			if (userStringValueSecond != "") {
				objMathFunc.AddOperandOrOperatorInMemory(userStringValueSecond);
				userStringValueSecond = "";
			}
			else if (userStringValueThird != "") {
				objMathFunc.AddOperandOrOperatorInMemory(userStringValueThird);
				userStringValueThird = "";
			}*/

	objMathFunc.AddOperandOrOperatorInMemory("10");
	objMathFunc.AddOperandOrOperatorInMemory("+");
	objMathFunc.AddOperandOrOperatorInMemory("9");
	objMathFunc.AddOperandOrOperatorInMemory("^");
	objMathFunc.AddOperandOrOperatorInMemory("log");
	objMathFunc.AddOperandOrOperatorInMemory("15");

	objMathFunc.RecreatingOperandsOperators();

	/*objMathFunc.PrintInfoMemoryArr();*/

	/* cout << "Choose option: " << endl
		 << "1 - Calculate;" << endl
		 << "2 - show your mathematical expression;" << endl;

	 if (userChooseOption == '1') {

	 }
	 else if (userChooseOption == '2') {
		 objMathFunc.PrintInfoMemoryArr();
	 }*/





	 /*if (isdigit(userCinValue[i])) {
		 if (userCinValue == "+") {
			 objMathFunc.AddOperandOrOperatorInMemory(userCinValue);
			 objMathFunc.PrintInfoMemoryArr();

		 }
		 objMathFunc.AddOperandOrOperatorInMemory(userCinValue);
		 objMathFunc.PrintInfoMemoryArr();

	 }
	 else if (userCinValue == "stop") {
		 cout << "stoping programm; " << endl;
		 break;
	 }

	 else {
		 cout << "Error! Breaking Cycle! " << endl;
		 break;
	 }*/





	 /*}*/







}

