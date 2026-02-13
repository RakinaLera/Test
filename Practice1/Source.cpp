////Найти сумму цифр натурального числа
#include <iostream>
//
//// Рекурсия на спуске (хвостовая рекурсия)
//int sumDigitsOnDescent(int n, int currentSum = 0) {
//    if (n == 0) {
//        return currentSum;
//    }
//    int lastDigit = n % 10;
//    return sumDigitsOnDescent(n / 10, 
//        currentSum + lastDigit);
//}
//
//// Рекурсия на возврате
//int sumDigitsOnReturn(int n) {
//    if (n == 0) {
//        return 0;
//    }
//    int lastDigit = n % 10;
//    int sumOfRemaining = sumDigitsOnReturn(n / 10);
//    return lastDigit + sumOfRemaining;
//}
//
//int main() {
//    int number;
//
//    setlocale(LC_ALL, "");
//    std::cout << "Введите натуральное число: ";
//    std::cin >> number;
//
//    if (number < 0) {
//        number = -number;
//    }
//
//    std::cout << "Рекурсия на спуске: "
//        << sumDigitsOnDescent(number) << std::endl;
//
//    std::cout << "Рекурсия на возврате: "
//        << sumDigitsOnReturn(number) << std::endl;
//
//    return 0;
//}

//using namespace std;
//// на спуске
//int rec(int x) {
//    if (x == 0) {
//		return 0;
//	} else {
//		return x % 10 + rec(x / 10);
//	}
//}
//
//// на возврате
//int rec1(int x) {
//	if (x == 0) {
//		return 0;
//	} else {
//		int y = rec1(x / 10);
//		return y + x % 10;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int x = 0;
//	int s = 0;
//	std::cout << "Введите натуральное число" << std::endl;
//	std::cin >> x;
//	// проверка!
//	if (x <= 0) {
//		std::cerr << "Ошибка! х < 0";
//		return 1;
//	}
//	s = rec(x);
//	std::cout << "Сумма цифр числа на спуске = " << s << std::endl;
//	s = rec1(x);
//	std::cout << "Сумма цифр числа на возврате = " << s << std::endl;
//	
//	return 0;
//}

//using namespace std;
// на спуске
int rec(int x, int min) {
	if (x == 0) {
		return min;
	} else {
		if (x % 10 < min) {
			min = x % 10;
		}
		rec(x / 10, min);
	}
}

// на возврате
int rec1(int x) {
	if (x < 10) {
		return x;
	} else {
		int min = rec1(x / 10);
		int digit = x % 10;
		if (min > digit) {
			min = digit;
		}
		return min;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int x = 0;
	int s = 0;
	std::cout << "Введите натуральное число" << std::endl;
	
	while (!(std::cin >> x) || (x < 0))
	{
		std::cout << "Ошибка! Введите число: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	
	if (x <= 0) {
		std::cerr << "Ошибка x < 0";
		return 1;
	}
	s = rec(x, 9);
	std::cout << "Минимальная цифра числа на спуске = " << s;
	s = rec1(x);
	std::cout << "Минимальная цифра числа на возврате = " << s;

	return 0;
}