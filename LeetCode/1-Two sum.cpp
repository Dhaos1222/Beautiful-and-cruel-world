#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int* twoSum(vector<int>nums, int target)
{
	int result[2] = { 0,0 };
	unordered_map<int, int> map;
	for (int i = 0; i < nums.size(); i++)
	{
		int complement = target - nums[i];
		if (map.find(complement) != map.end())
		{
			int result[2] = { map[complement],i };
			return result;
		}
		map[nums[i]] = i;
	}
	cout << "No two sum solution" << endl;
	return result;
}

int main()
{
	int target = 9;
	vector<int>nums = { 2,3,1,5,4 };
	int* result;

	result = twoSum(nums, target);

	cout << result[0] << " " << result[1] << endl;
	
	system("pause");

	return 0;
}

