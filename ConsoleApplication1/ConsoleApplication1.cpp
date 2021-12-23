// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "quick_sort.h"

using namespace std;

int main()
{
	vector<int> vec{ 2,7,1,2,3,1,9,6,3 ,88,-1,-2,-10,-999,2,-445 };
	//vector<float> vec{ 2,7,1,2,3,1,9,6,3 ,88,-1,-2,-10,-999,2,-445.345,5.534,223.44,-1.5,-1.89448,-1.55654444 };
	//vector<double> vec{ 2,7,1,2,3,1,9,6,3 ,88,-1,-2,-10,-999,2,-445.345,5.534,223.44,-1.5,-3344.89448,-1.55654};
	//vector<string> vec{ "efef","qqq","aaafrfr","aabbgbggb","bb","c"};

	//int arr[]{ 9,12,9,2,-1,17,1,6,-88,54 ,-99,33,3431,234,52,1,1,3,0};
	//float arr[]{ 2,7,1,2,3,1,9,6,3 ,88,-1,-2,-10,-999,2,-445.345,5.534,223.44,-1.5,-3344.89448,-1.5565444};
	//double arr[]{ 2,7,1,2,3,1,9,6,3 ,88,-1,-2,-10,-999,2,-445.345,5.534,223.44,-1.5,-3344.89448,-1.5565444};
	//string arr[]{ "efef","qqq","aaafrfr","aabbgbggb","bb","c" };

	//int size = sizeof(arr) / sizeof(arr[0]);


	vector<int> res = quick_sort_int(vec);
	//vector<int> res = quick_sort_fu(arr, size)


	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
