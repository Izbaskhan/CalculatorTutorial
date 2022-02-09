
#include <iostream>
#include <thread>
using namespace std;
void hello() {
	cout << "Hello Concurent World \n";
}
int main()
{
	double i = 0;
	double j = 0;
	while (true)
	{
		i++;
		if (i > 2 * 1e8) {
			i = 0;
			cout << j << "\n";
			j++;
		}
	}

}
