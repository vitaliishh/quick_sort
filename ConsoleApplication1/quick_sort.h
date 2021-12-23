#pragma once

#include <iostream>
#include <vector>

using namespace std;


vector<int> quick_sort_int(vector<int> vec);
vector<double> quick_sort_double(vector<double> vec);
vector<string> quick_sort_string(vector<string> vec);
vector<float> quick_sort_float(vector<float> vec);


vector<int> quick_sort_int(int* arr, int size);
vector<string> quick_sort_string(string* arr, int size);
vector<double> quick_sort_double(double* arr, int size);
vector<float> quick_sort_float(float* arr, int size);

