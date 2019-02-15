#include <iostream>
#include <string>

using namespace std;

int main()
{
	string resultMaxSeq = "";
	int resultMaxCnt = 0;
	
	string currentSeq;
	int currentCnt;
	
	string input;
	
	// 读取第一个字符串并初始化
	cin >> input;
	currentSeq = input;
	currentCnt = 1;
	
	// 读取后续内容
	while(cin >> input)
	{
		if(input == currentSeq)
		{
			// 后续读入与当前计数字符串相同
			currentCnt++;
		}
		else
		{
			// 读入与之前不同
			if(currentCnt > resultMaxCnt)
			{
				resultMaxSeq = currentSeq;
				resultMaxCnt = currentCnt;
			}
			currentSeq = input;
			currentCnt = 1;
		}
	}
	
	// 最终结果处理
	if(currentCnt > resultMaxCnt)
	{
		resultMaxSeq = currentSeq;
		resultMaxCnt = currentCnt;
	}
	
	cout << "Max Seq\t" << resultMaxSeq << endl;
	cout << "Seq Cnt\t" << resultMaxCnt << endl;
	return 0;
}