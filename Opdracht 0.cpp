#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string caesarcijfer(string item, int rotation){
	for(unsigned int index = 0; index <= item.size(); index ++){
		if(item[index] >= 'a' && item[index] <= 'z'){
			item[index] = 'a' + ((item[index] - 'a' + rotation) % 26);
		}
		if(item[index] >= 'A' && item[index] <= 'Z'){
			item[index] = 'A' + ((item[index] - 'A' + rotation) % 26);
		}
	}
	return item;
}

int main(int argc, char* argv[]){
	int rotation = atoi(argv[1]);
	string item;
	getline(cin, item);
	string cijfer = caesarcijfer(item, rotation);
	cout << cijfer << "\n";
}