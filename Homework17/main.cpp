#include <iostream>
#include <conio.h>
#include <ctime>

double mean(int a, int b)
{
	return (a + b) / 2.0;
}

double mean_arr(int arr[], int const size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return double(sum) / size;
}

void powers(int n, int m)
{
	int result = 1;
	for (int i = 0; i <= m; i++)
	{
		result *= n;
		std::cout << result << "\t";
	}
	
}

void positive_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		if (arr[i] < 0) arr[i] = arr[i] * -1;


}


int main()
{
	std::cout << "Task 1 \n\n";
	std::cout << "Enter two numbers - ";
	int a, b;
	std::cin >> a>>b;
	
	std::cout << "The average = " << mean(a, b) << "\n\n";
	
	std::cout << "Task 2 \n\n";
	int const size = 5;
	int arr[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 25;
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << '\t';

	std::cout << '\n' << "Average = " << mean_arr(arr, size) << "\n\n";
	
	std::cout << "Task 3 \n\n";
	std::cout << "Enter the number N - ";
	int n, m;
	std::cin >> n;
	std::cout << "Enter the number M - ";
	std::cin >> m;
	powers(n, m);
	std::cout << "\n\n";

	std::cout << "Task 4 \n\n";
	int const size1 = 6;
	int arr1[size1];
	

	for (int i = 0; i < size1; i++)
		arr1[i] = -25 + rand() % 50;
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << '\t';

	positive_arr(arr1, size1);
	std::cout << "\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << '\t';


	return 0;
}
