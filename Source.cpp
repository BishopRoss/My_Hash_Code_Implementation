


#include <iostream>
#include <map>
using namespace std;




int hashCode(string word, int tableSize)
{
	int result = 0;
	for (int i = 0; i < word.length(); i++)
	{
		result += unsigned int(word[i]);
	}
	return result % tableSize;
}

int main()
{
	const int tableSize = 95;//this value represents what would be the size of a bucket array
	//the 95 comes from the total amount of C++ keywords

	//generated hashcodes for bucket array
	cout << "Hashcodes for C++ keywords\n";
	cout << hashCode("cin",tableSize) << " for cin\n";
	cout << hashCode("int",tableSize) << " for int\n";
	cout << hashCode("string",tableSize) << " for string\n";
	cout << hashCode("break", tableSize) << " for break\n";
	cout << hashCode("char", tableSize) << " for char\n";
	cout << hashCode("long", tableSize) << " for long\n";
	cout << hashCode("namespace", tableSize) << " for namespace\n";
	cout << hashCode("const", tableSize) << " for const\n";

	return 0;
}