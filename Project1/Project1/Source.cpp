#include <string>
#include <iostream>

int RomtoAr(std::string number)
{
	int num = 0;						//this will contain the sum
	int curr = 0;						//this will contain the current number
	int prev = 1;						//this will contain the previous number
	for (int i = number.size()-1; i >= 0; i--)
	{
		int x = toupper(number[i]);
		std::cout << i << std::endl;
		switch (x)
		{
		case (73):
			curr = 1;
			break;
		case(88):
			curr = 10;
			break;
		case(86):
			curr = 5;
			break;
		case(76):
			curr = 50;
			break;
		case(67):
			curr = 100;
			break;
		case(68):
			curr = 500;
			break;
		case(77):
			curr = 1000;
			break;
		default:
			return 0;
			break;
		}
		if (curr < prev)
			num -= curr;
		else
			num += curr;
		prev = curr;
	}

	return num;
}

int main()
{
	std::string number{};				//this string will contain the roman format which the user give
	std::cout << "Give me a Roman number: ";
	std::cin >> number;
	std::cout << number.size() << std::endl;
	int num = RomtoAr(number);
	if (num > 0)
		std::cout << std::endl << "The Arabic format of this number is: " << num;
	else
		std::cout << "Your number was 0 or contained not allowed characters.";
	std::cout << std::endl;
	system("pause");
	return 0;
}