//============================================================================
// Name        : CPPUtils.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

#define APP 32432

int main() {
	cout << "!!!Hello World!!!" << endl;
	cout << "你好呀！" << endl;

	//变量的声明
	int a =2 ;
	int b (2);

	cout << a <<endl;
	cout << b <<endl;
	cout << (a==b) <<endl;

	unsigned year = 100;
	cout << year <<endl;


	//string的使用
	string str1 = "this is hecj";
	string str2 ("this is hecj");
	cout << str1 <<endl;
	cout << str2 <<endl;
	cout << (str1 == str2) <<endl;

	//常量
	char X = 'X';
	cout << X <<endl;
	cout << APP <<endl;

	//cout << AA <<endl;

	return 0;

}
