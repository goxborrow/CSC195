#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>

using namespace std;

unsigned int GetHash(std::string str) {
	int hash = 0;
	//"Amia" 

	for (char c : str) {
		hash = hash * 31 + (int)c;
	}
	return hash;
}

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

	//list<string>::iterator it = lst.begin();
	//cout << *it << endl;
	//it++;
	//cout << *it << endl;

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

	//unordered map
	unordered_map<string, string> um;
	um["Apples"] = "Granny Smith";
	um["Oranges"] = "Blood";
	um["Pears"] = "Kasane Teto";

	cout << um["Pears"] << endl;

	//stack
	stack<int> s;
	s.push(1);
	s.push(2);
	s.pop();
	cout << s.top() << endl;

	
	
	
	//cout << &i << endl;
	//cout << (void*)(& arr[0]) << endl;
	//cout << (void*)(& arr[1]) << endl;

	//-----------------------
	//

	string name = "Amia";
	int hash = GetHash(name);
	cout << hash << endl;

	int data[10];
	data[hash % 10] = 84037;
	//buncha stuff
	hash = GetHash("Amia");
	cout << data[hash % 10] << endl;

	return 0;
}