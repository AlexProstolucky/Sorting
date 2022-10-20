#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solution(vector <int> v)
{
    sort(v.begin(), v.end());
	for (size_t i = 0; i < v.size(); i++)
	{
		if (i + 1 != v.size()) {
			if (v[i] == v[i + 1])
			{
				v.erase(v.begin() + i);
				v.erase(v.begin() + i);
				i--;
			}
		}
		else break;
	}

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}

int main()
{
	vector <int> v{ 9, 3, 9, 3, 9, 7, 9, 7, 7, 9, 0};
	solution(v);
}