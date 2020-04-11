#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	//ifstream inFile;
	//inFile.open("list.txt");

	////check for error

	//if (inFile.fail())
	//{
	//	cerr << "Error opening File";
	//	exit(1);
	//}

	//string item;
	//int count = 0;

	////read a file until you've reached the end
	//while (!inFile.eof())
	//{
	//	inFile >> item;
	//	if (item == "orange")
	//	{
	//		count++;
	//	}
	//}

	//cout << count << " instances of Orange found!" << endl;

	//inFile.close();

	ofstream outFile;

	outFile.open("sample.txt");

	outFile << "First Number: " << 5 << endl;

	outFile.close();

	return 0;
}