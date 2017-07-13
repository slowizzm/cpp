//// Example_006 - Dice Game - random/switch
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <ctime>
//
//int number, result;
//
//int main()
//{
//	srand(time(NULL));
//
//	number = 12;
//	result = 0;
//
//	result = rand() % number + 1;
//
//	std::cout << "Result: " << result << std::endl;
//
//	switch (result)
//	{
//	case 7: 
//		std::cout << "rolled a 7" << std::endl;
//		break;
//	case 11:
//		std::cout << "rolled an 11" << std::endl;
//		break;
//	default:
//		std::cout << "you lose" << std::endl;
//		break;
//	}	
//
//	system("PAUSE");
//
//	return 0;
//}