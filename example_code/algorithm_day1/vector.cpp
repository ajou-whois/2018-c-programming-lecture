#include <vector>
#include <stdio.h>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	printf("%d", v[0]);	// 1출력
	v.push_back(2);
	printf("%d", v[1])	// 2출력

	for(int i=3;i<10;i++)
		v.push_back(i);

	printf("print by index: ");
	for(int i=0; i<v.size(); i++)
		printf("%d ", v[i]);
	printf("\n");

	vector<int>::iterator it;
	printf("print by iterator: ");
	for (it = v.begin();  it != v.end(); ++it) {
		printf("%d ", *it);
	}

	v.clear();	// free
	printf("%d\n",v.size());
}