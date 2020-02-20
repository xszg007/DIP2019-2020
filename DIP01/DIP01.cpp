// DIP01.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
#include <string.h>
#include <string>
#include "stdafx.h"
#include <vector>
#include<opencv.hpp>
#include"LeeCode_Solution.h"
using namespace std;
using std::string;
using namespace cv;

Solution::Solution()
{

}

Solution::~Solution()
{
	destroyAllWindows();
}


int Solution::maxArea(vector<int>& height) {
	int i = 0, j = height.size() - 1;
	int res = 0;
	while (i<j)
	{
		res = max(res, (j - i)*min(height[i], height[j]));
		if (height[i]<height[j])
		{
			i++;
		}
		else {
			j--;
		}
	}
	return res;
}



int main()
{
	int n[] = { 1,8,6,2,5,4,8,3,7 };
	vector<int> heightm(n, n + 9);
	int ress = 0;
	Solution enSolution;//实例化类
	ress = enSolution.maxArea(heightm);
	//cout << ress << endl;
	printf("%d", ress);
	return ress;
}

