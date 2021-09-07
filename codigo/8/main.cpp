#include <iostream>
using namespace std;
class F {
	public:
		F(int m = 1, int d = 1, int a = 1900 ) {
			this->m = m;
			this->a = a;
			this->d = d;
		}
		F &operator++(int) {
			d++;
			return *this;
		}
		F operator++() {
			d++;
			return *this;
		}
		F operator--() {
			d--;
			return *this;
		}
		F operator--(int) {
			d--;
			return *this;
		}
	private:
		unsigned int m, d, a;
		friend int main();
};
int main() {
	F f;
	f++;
	cout << f.d << endl;
	++f;
	cout << f.d << endl;
	f--;
	cout << f.d << endl;
	--f;
	cout << f.d << endl;
	return 0;
}
