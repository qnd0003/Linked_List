#include <iostream>
using namespace std;

int main() {
	int *head = new int;
	*head = 4;
	cout << "before: " << *head << endl;
	
	int* temp = head;
	*temp = 44;
	cout << "after: " << *head << endl;
	return 0;
}
