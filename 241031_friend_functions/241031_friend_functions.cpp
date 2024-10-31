#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Fruit {
private:
	int price;
	string fName;
public:
	friend ostream& operator<<(ostream& os, const Fruit& f);
	Fruit(string name = "", int p = 0) :fName(name), price(p) {};
	string getName() {
		return fName;
	}
};

ostream& operator<<(ostream& os, const Fruit& f) {
	os << f.fName << "costs " << f.price << endl;
	return os;
}


class Basket {
private:
	vector<Fruit> fBasket;
public:
	void add(const Fruit& ff) {
		fBasket.push_back(ff);
	}
	void basketCheck() {
		for (vector<Fruit>::iterator iter = fBasket.begin();
			iter != fBasket.end();
			iter++) {
			cout << iter->getName() << endl;
		}
	}
};

int main() {

	char c[]{ "hello" };

	string ss = "";



	string* ps = &ss;
	Fruit f("banane", 10);
	cout << f.getName() << endl;
	cout << f;

	Basket b;
	b.add(Fruit("arbuz"));
	b.add(Fruit("dynia"));
	b.basketCheck();
	return 0;
}
