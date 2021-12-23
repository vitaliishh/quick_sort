#include "quick_sort.h"

vector<int> quick_sort_int(vector<int> vec)
{
	int pivot = vec[vec.size() - 1];

	vector<int> fPart;
	vector<int> sPart;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] <= pivot)
		{
			fPart.push_back(vec[i]);
		}
		else if (vec[i] > pivot)
		{
			sPart.push_back(vec[i]);
		}
	}

	vector<int> res1;
	vector<int> res2;
	vector<int> fullRes;

	vector<int> rtnFullRes2;


	for (int i = 0; i < fPart.size(); i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPart.size(); i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPart.size() > 1 || sPart.size() > 1)
	{
		if (fPart.size() != 0) {
			res1 = quick_sort_int(fPart);
		}

		if (sPart.size() != 0) {
			res2 = quick_sort_int(sPart);
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<double> quick_sort_double(vector<double> vec)
{
	double pivot = vec[vec.size() - 1];

	vector<double> fPart;
	vector<double> sPart;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] <= pivot)
		{
			fPart.push_back(vec[i]);
		}
		else if (vec[i] > pivot)
		{
			sPart.push_back(vec[i]);
		}
	}

	vector<double> res1;
	vector<double> res2;
	vector<double> fullRes;

	vector<double> rtnFullRes2;


	for (int i = 0; i < fPart.size(); i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPart.size(); i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPart.size() > 1 || sPart.size() > 1)
	{
		if (fPart.size() != 0) {
			res1 = quick_sort_double(fPart);
		}

		if (sPart.size() != 0) {
			res2 = quick_sort_double(sPart);
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<string> quick_sort_string(vector<string> vec)
{
	string pivot = vec[vec.size() - 1];

	vector<string> fPart;
	vector<string> sPart;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] <= pivot)
		{
			fPart.push_back(vec[i]);
		}
		else if (vec[i] > pivot)
		{
			sPart.push_back(vec[i]);
		}
	}

	vector<string> res1;
	vector<string> res2;
	vector<string> fullRes;

	vector<string> rtnFullRes2;


	for (int i = 0; i < fPart.size(); i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPart.size(); i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPart.size() > 1 || sPart.size() > 1)
	{
		if (fPart.size() != 0) {
			res1 = quick_sort_string(fPart);
		}

		if (sPart.size() != 0) {
			res2 = quick_sort_string(sPart);
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<float> quick_sort_float(vector<float> vec)
{
	float pivot = vec[vec.size() - 1];

	vector<float> fPart;
	vector<float> sPart;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] <= pivot)
		{
			fPart.push_back(vec[i]);
		}
		else if (vec[i] > pivot)
		{
			sPart.push_back(vec[i]);
		}
	}

	vector<float> res1;
	vector<float> res2;
	vector<float> fullRes;

	vector<float> rtnFullRes2;


	for (int i = 0; i < fPart.size(); i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPart.size(); i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPart.size() > 1 || sPart.size() > 1)
	{
		if (fPart.size() != 0) {
			res1 = quick_sort_float(fPart);
		}

		if (sPart.size() != 0) {
			res2 = quick_sort_float(sPart);
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<int> quick_sort_int(int* arr, int size)
{
	int pivot = arr[size - 1];

	int fPartSize = 0;
	int sPartSize = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPartSize++;
		}
		else if (arr[i] > pivot)
		{
			sPartSize++;
		}
	}

	int* fPart = new int[fPartSize];
	int* sPart = new int[sPartSize];

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPart[cnt1] = arr[i];
			cnt1++;
		}
		else if (arr[i] > pivot)
		{
			sPart[cnt2] = arr[i];
			cnt2++;
		}
	}

	vector<int> res1;
	vector<int> res2;
	vector<int> fullRes;

	vector<int> rtnFullRes2;

	for (int i = 0; i < fPartSize; i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPartSize; i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPartSize > 1 || sPartSize > 1)
	{
		if (fPartSize != 0) {
			res1 = quick_sort_int(fPart, fPartSize);

			delete[] fPart;
		}

		if (sPartSize != 0) {
			res2 = quick_sort_int(sPart, sPartSize);

			delete[] sPart;
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<string> quick_sort_string(string* arr, int size)
{
	string pivot = arr[size - 1];

	int fPartSize = 0;
	int sPartSize = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPartSize++;
		}
		else if (arr[i] > pivot)
		{
			sPartSize++;
		}
	}

	string* fPart = new string[fPartSize];
	string* sPart = new string[sPartSize];

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPart[cnt1] = arr[i];
			cnt1++;
		}
		else if (arr[i] > pivot)
		{
			sPart[cnt2] = arr[i];
			cnt2++;
		}
	}

	vector<string> res1;
	vector<string> res2;
	vector<string> fullRes;

	vector<string> rtnFullRes2;


	for (int i = 0; i < fPartSize; i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPartSize; i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPartSize > 1 || sPartSize > 1)
	{
		if (fPartSize != 0) {
			res1 = quick_sort_string(fPart, fPartSize);

			delete[] fPart;
		}

		if (sPartSize != 0) {
			res2 = quick_sort_string(sPart, sPartSize);

			delete[] sPart;
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<double> quick_sort_double(double* arr, int size)
{
	double pivot = arr[size - 1];

	int fPartSize = 0;
	int sPartSize = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPartSize++;
		}
		else if (arr[i] > pivot)
		{
			sPartSize++;
		}
	}

	double* fPart = new double[fPartSize];
	double* sPart = new double[sPartSize];

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPart[cnt1] = arr[i];
			cnt1++;
		}
		else if (arr[i] > pivot)
		{
			sPart[cnt2] = arr[i];
			cnt2++;
		}
	}

	vector<double> res1;
	vector<double> res2;
	vector<double> fullRes;

	vector<double> rtnFullRes2;


	for (int i = 0; i < fPartSize; i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPartSize; i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPartSize > 1 || sPartSize > 1)
	{
		if (fPartSize != 0) {
			res1 = quick_sort_double(fPart, fPartSize);

			delete[] fPart;
		}

		if (sPartSize != 0) {
			res2 = quick_sort_double(sPart, sPartSize);

			delete[] sPart;
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}


vector<float> quick_sort_float(float* arr, int size)
{
	float pivot = arr[size - 1];

	int fPartSize = 0;
	int sPartSize = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPartSize++;
		}
		else if (arr[i] > pivot)
		{
			sPartSize++;
		}
	}

	float* fPart = new float[fPartSize];
	float* sPart = new float[sPartSize];

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			fPart[cnt1] = arr[i];
			cnt1++;
		}
		else if (arr[i] > pivot)
		{
			sPart[cnt2] = arr[i];
			cnt2++;
		}
	}

	vector<float> res1;
	vector<float> res2;
	vector<float> fullRes;

	vector<float> rtnFullRes2;

	for (int i = 0; i < fPartSize; i++)
	{
		fullRes.push_back(fPart[i]);
	}

	fullRes.push_back(pivot);

	for (int i = 0; i < sPartSize; i++)
	{
		fullRes.push_back(sPart[i]);
	}

	if (fPartSize > 1 || sPartSize > 1)
	{
		if (fPartSize != 0) {
			res1 = quick_sort_float(fPart, fPartSize);

			delete[] fPart;
		}

		if (sPartSize != 0) {
			res2 = quick_sort_float(sPart, sPartSize);

			delete[] sPart;
		}

		for (int i = 0; i < res1.size(); i++)
		{
			rtnFullRes2.push_back(res1[i]);
		}

		rtnFullRes2.push_back(pivot);

		for (int i = 0; i < res2.size(); i++)
		{
			rtnFullRes2.push_back(res2[i]);
		}

		return rtnFullRes2;
	}


	return fullRes;
}