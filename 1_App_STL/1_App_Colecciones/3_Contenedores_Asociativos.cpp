
#include "stdafx.h"
#include <iostream>
#include <array>
#include <set>
#include <map>
#include <sstream>

void ejemplo_set()
{
	using namespace std;
	set<int> miSet;
	for (int i = 0; i < 3; i++)
	{
		miSet.insert(i);
	}
	set<int>::iterator it = miSet.begin();
	while (it != miSet.end())
	{
		cout << *it << endl;
		it++;
	}
	cout << endl;
}
void ejemplo_map()
{
	using namespace std;
	map<int, string> miMap;
	for (int i = 0; i < 3; i++)
	{
		std::stringstream ss;
		ss << "Soy el " << i;
		miMap.insert(std::pair<int, string>(i, ss.str()));
	}
	for (map<int, string>::iterator ii = miMap.begin(); ii != miMap.end(); ++ii)
	{
		cout << (*ii).first << ": " << (*ii).second << endl;
	}

	cout << endl;
}
void ejemplo_map_iterador() {
	using namespace std;
	map<int, string> miMap;
	miMap.insert(std::pair<int, string>(1, "UNO"));
	miMap[2] = "DOS";
	miMap[3] = "TRES";
	miMap.insert(std::pair<int, string>(4, "CUATRO"));
	map<int, string>::iterator it;
	for (it = miMap.begin(); it != miMap.end(); it++)
	{
		cout << (*it).first << ": " << (*it).second << endl;
	}
}