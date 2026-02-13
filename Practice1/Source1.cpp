////Найти минимальную цифру натурального числа
//
#include <iostream>
//#include <climits>
//
//// Рекурсия на спуске (хвостовая рекурсия)
//int minDigitOnDescent(int n, int currentMin = INT_MAX) {
//    if (n == 0) {
//        if (currentMin == INT_MAX) {
//            return 0;
//        }
//        return currentMin;
//    }
//    int lastDigit = n % 10;
//    int newMin = (lastDigit < currentMin) ? lastDigit : currentMin;
//
//    return minDigitOnDescent(n / 10, newMin);
//}
//
//// Рекурсия на возврате
//int minDigitOnReturnAlt(int n) {
//    if (n < 10) {
//        return n;
//    }
//    int lastDigit = n % 10;
//    int minOfRemaining = minDigitOnReturnAlt(n / 10);
//
//    return (lastDigit < minOfRemaining) ? lastDigit : minOfRemaining;
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
//        << minDigitOnDescent(number) << std::endl;
//
//    std::cout << "Рекурсия на возврате: "
//        << minDigitOnReturnAlt(number) << std::endl;
//
//    return 0;
//}


//int rec(int x, int max) {
//	if (x == 0) {
//		return max;
//	} else {
//		if (max < x % 10) {
//			max = x % 10;
//		}
//		rec(x / 10, max);
//	}
//}
//
//// на возврате
//int rec1(int x) {
//	if (x < 10) {
//		return x;
//	} else {
//		int y = rec1(x / 10);
//		if (x % 10 < y) {
//			return y;
//		} else {
//			return x % 10;
//		}
//	}
//}
//
//int main() {
//	int x = 0;
//	int s = 0;
//	int s1 = 0;
//
//	setlocale(LC_ALL, "rus");
//	std::cout << "Введите натуральное число:" << std::endl;
//	std::cin >> x;
//
//	// проверка данных
//
//	s = rec(x, 0);
//	s1 = rec1(x);
//
//	std::cout << "Максимальная цифра на спуске = " << s;
//	std::cout << "Максимальная цифра на возврате = " << s1;
//
//}

//// на спуске
//int rec(int x, int max) {
//	if (x < max) {
//		return max;
//	} else {
//		if (x % 10 > max) {
//			max = x % 10;
//		}
//		rec(x / 10, max);
//	}
//}
//
//// на возврате
//int rec1(int x) {
//	if (x < 10) {
//		return x;
//	} else {
//		int max = rec1(x / 10);
//		if (x % 10 > max) {
//			max = x % 10;
//		}
//		return max;
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
//	s = rec(x, 0);
//	std::cout << "Максимальная цифра числа на спуске = " << s << std::endl;
//	s = rec1(x);
//	std::cout << "Максимальная цифра числа на возврате = " << s << std::endl;
//
//	return 0;
//}
