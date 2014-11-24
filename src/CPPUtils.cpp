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

//定义一个函数
int add(int a,int b){
	return a+b;
}

//地址传递
void address(int &a ,int &b){
	a = 11;
	b = 12;
}


int main() {
	/*

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



	//逗号运算符
	int b;
	int a = (b =5 , b+3);
	cout << a<<endl;



	//sizeof函数
	cout << sizeof(char) <<endl;
	cout << sizeof(int) <<endl;
	cout << sizeof(long) <<endl;
	cout << sizeof(double) <<endl;



	//getline接收一行字符串
	string str ;
	cout<<"请输入一行字符串..."<<endl;
	getline(cin,str);
	cout<<str<<endl;


	int sum = add (11,12);
	cout<<sum<<endl;




	int a =1;
	int b = 2;
	cout<<a<<","<<b<<endl;
	address(a,b);
	cout<<a<<","<<b<<endl;


	//c++支持数组越界
	int a[5];
	a[0] = 0;
	a[1] = 1;
	cout<<a[6]<<endl;

	char str[] = {'1','\0'};
	cout<<str<<endl;
	strcpy(str,"你好，我要复制了");
	cout<<str<<endl;




	char str[10] ;
	cin.getline(str,10);
	cout<<str<<endl;


*/






	return 0;

}
