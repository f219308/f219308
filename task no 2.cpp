#include<iostream>
#include<ctime>
using namespace std;
template<class T, int S = 10>
class list
{
	int size = S;
	int count = 0;
public:
	T* array[S];
	void insert_element_at_last();
	T remove_last_element();
	T max_element();
	T min_element();
	T list_average();
};
template<class T, int S>
void list<T, S>::insert_element_at_last()
{
	count++;
	*array[count - 1] = rand() % 10;
}
template<class T, int S>
T list<T, S>::remove_last_element()
{
	T* ptr = array[count - 1];
	array[count - 1] = NULL;
	count--;
	return *ptr;
}
template<class T, int S>
T list<T, S>::max_element()
{
	int MX = array[0];
	for (int i = 1; i < S; i++)
	{
		if (array[i] > MX)
		{
			MX = array[i];
		}
	}
	return MX;
}
template<class T, int S>
T list<T, S>::min_element()
{
	int  MN = array[0];
	for (int i = 1; i < S; i++)
	{
		if (array[i] > MN)
		{
			MN = array[i];
		}
	}
	return MN;
}
template<class T, int S>
T list<T, S>::list_average()
{
	float sum = 0;
	float average = 0;
	for (int i = 0; i < count; i++)
	{
		sum += *array[i];
	}
	return average = sum / S;

}

int main()
{
	list<double, 10>list;
	double ptr = 1.9;
	list.array[0] = &ptr;
	list.insert_element_at_last();
	cout << list.list_average();
	double returnval = list.remove_last_element();
	cout << returnval << endl;

}

