#include <iostream>

using std::cout;
using std::endl;

struct sArray
{
	int v1;
	double v2;
	bool v3;
	sArray(int n, double d, bool b) : v1(n), v2(d), v3(b) {}
};

class cArray
{
public:
	int v1;
	double v2;
	bool v3;
	cArray(int n, double d, bool b) : v1(n), v2(d), v3(b) {}
};

int main()
{
	//
	// Structured Binding
	// Use C++ 17

	#pragma region Arrays Init

	int arr1[3] = { 1,1,1};
	int* arr2 =	new int[3];
	arr2[0] = arr2[1] = arr2[2] = 2;
	sArray s(1, 1.2, true);
	cArray c(1, 1.2, false);
	#pragma endregion

#pragma region Binding

	auto [arr1value1, arr1value2, arr1value3] = arr1;
	// auto [arr2value1, arr2value2, arr2value3] = arr2;	�������� ���Ҽ� �ִ� �����ʹ� ������ ��Ȯ�����ʴٴ� ���� X. 
	//														����� ������ ���ε� ��Һ��� �迭�� ũ�Ⱑ Ŭ ��쿡�� X
	auto [svalue1, svalue2, svalue3] = s;
	auto [cvalue1, cvalue2, cvalue3] = c;

#pragma endregion
	
#pragma region Check

	cout << arr1value1 << arr1value2 << arr1value3 << endl;
	// cout << arr2value1 << arr2value2 << arr2value3 << endl;
	cout << svalue1 << svalue2 << svalue3 << endl;
	cout << cvalue1 << cvalue2 << cvalue3 << endl;

#pragma endregion


	return 0;
}