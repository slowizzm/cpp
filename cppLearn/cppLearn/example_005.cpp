//// Example_005 simple calculator - statements
//
//#include <iostream>
//#include <string>
//
//
//double x = 0.0;
//double y = 0.0;
//double result = 0.0;
//
//int main()
//{
//	std::string s = "asdfghjkl 33 ...|||";
//	char choice = '+';
//	int c = 33;
//
//	std::cout << "Input first number ... " << std::endl;
//	std::cin >> x;
//
//	std::cout << "+ - * / " << std::endl;
//	std::cin >> choice;
//
//	std::cout << "Input second number ... " << std::endl;
//	std::cin >> y;
//
//
//	if (choice == '+')
//	{
//		result = x + y;
//	}
//
//	else if (choice == '-')
//	{
//		result = x - y;
//	}
//
//	else if (choice == '*')
//	{
//		result = x * y;
//	}
//
//	else if (choice == '/')
//	{
//		result = x / y;
//	}
//
//	else
//	{
//		std::cout << "Wrong Input! " << std::endl;
//	}
//
//	std::cout << "Result: " << result << std::endl;
//	std::cin >> result;
//
//	system("PAUSE");
//
//	return 0;
//}