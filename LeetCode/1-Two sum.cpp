#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>nums, int target)
{
	vector<int> result;
	unordered_map<int, int> map;
	for (int i = 0; i < nums.size(); i++)
	{
		int complement = target - nums[i];
		if (map.find(complement) != map.end())
		{
			result.push_back(map[complement]);
			result.push_back(i);
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
	vector<int>nums = { 2,3,1,5,9 };
	vector<int> result;

	result = twoSum(nums, target);
	if(!result.empty())
	    cout << result[0] << " " << result[1] << endl;
	
	system("pause");

	return 0;
}

