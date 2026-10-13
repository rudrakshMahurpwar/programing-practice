#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream of("input.txt");
	if (!of)
	{
		cerr << "File not Found" << endl;
		return 1;
	}

	int line, words, chars;
	string li;
	char ch;
	line = words = chars = 0;
	while (getline(of, li))
	{
		line++;
	}
	of.clear();
	of.seekg(0, ios::beg);
	while (of >> li)
	{
		words++;
	}
	of.clear();
	of.seekg(0, ios::beg);
	while (of.get(ch))
		chars++;

	of.close();
	cout << "Total Lines: " << line << endl;
	cout << "Total Words: " << words << endl;
	cout << "Total Characters: " << chars << endl;
	return 0;
}
