#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// Empty vector holding all names from file
    vector<string> names;
	
	ifstream input("list.txt");
	if(!input.is_open()) 
		cout << "Unable to open file\n";
	
	ofstream output("listSorted.txt");
	
	string str;
	while(getline(input, str))
		names.push_back(str);
	
	// #include <algorithm> to make it work
	sort(names.begin(), names.end());
	
	// Loop to print names
    for (size_t i = 0; i < names.size(); i++)
        output << names[i] << endl;
	
	output.close();
	input.close();

    return 0;
}