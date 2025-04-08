#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>

using namespace std;

int main()
{
	//array
	
	//int i = 0xff;
	//array<int, 5> arr = { 1, 2, 3, 4, 5};
	//cout<<arr.size()<<endl;

	array<string, 7> arr = { "Monday", "Tuesday", "Wednesday", "Thursday", +
	"Friday", "Saturday", "Sunday" };

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}


	//vector
	//vector<int> vec = { 1,2,3,4,5 };
	//vec.push_back(6);

	//cout << vec.size() << endl;
	//cout << vec.capacity() << endl;

	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	vec.push_back(7);
	vec.pop_back();

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}


	////list
	//list<int> lst = { 1,2,3,4,5 };
	//lst.push_back(6);
	//lst.insert(lst.begin(), 0);

	list<string> lst = { "Apple", "Pear", "Banana" };
	lst.insert(lst.begin(), "Orange");
	lst.insert(lst.end(), "Tomato");
	lst.remove("Banana");

	for (string list : lst) {
		cout << list << endl;
	}

	//map
	//map<string, int>m;
	//m["riley"] = 46;
	//m["garrett"] = 86;
	//m["mike"] = 100;

	//cout << m["riley"] << endl;

	map<string, int>groceries = { {"Apples", 8},{"Oranges", 2},{"Pears", 9001} };
	groceries["Oranges"] = 12;

	for (auto grocery : groceries) {
		cout << grocery.first << ": " << grocery.second << endl;
	}


	
	
	//cout << &i << endl;
	//cout << (void*)(& arr[0]) << endl;
	//cout << (void*)(& arr[1]) << endl;


	return 0;
}