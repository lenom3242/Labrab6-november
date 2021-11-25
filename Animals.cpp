#include <iostream>

using namespace std;

class Animal {
protected:
	string name;
	int age;

public:
	Animal(string name = "Animal", int age = 1) : name(name), age(age){}

	void voice(int questionmark) {
		cout << "My name is " << name;
		for (int i = 0; i < questionmark; i++)
			cout << "?";

	}
};
class Cat : public Animal {
protected:
	int trickery;
public:
	 void voice(int meow) {
		 cout << "My name is " << name;
		 for (int i = 0; i < meow; i++)
			 cout << " Meow!";
		 cout << endl;
	}
	 Cat(string name = "Barsik", int age = 1, int trickery = 100) :  trickery(trickery), Animal(name, age) { }
};
class Dog : public Animal {
protected:
	int loyalty;
public:
	void voice(int bark) {
		cout << "My name is " << name;
		for (int i = 0; i < bark; i++)
			cout << " Bark!";
		cout << endl;
	}
	Dog(string name = "Sharik", int age = 1, int loyalty = 100) : loyalty(loyalty), Animal(name, age) {}
};
class CatDog : public Cat, public Dog {
public:
	void information(int catmeow, int dogbark) {
		cout << "Cat's name: " << Cat::name << endl << "Dog's name: " << Dog::name << endl << "Cat's age: " << Cat::age << " Dog's age: " << Dog::age << "\nChance of trickery: " << 100-Cat::trickery
			<< " Chance of betrayal:" << 100-Dog::loyalty << endl;
		Cat::voice(catmeow);
		Dog::voice(dogbark);
	}
	CatDog(string catname = "Barsik", int catage = 1, int trickery = 100, string dogname = "Sharik", int dogage = 1, int loyalty = 100) : Cat(catname, catage, trickery), Dog(dogname, dogage, loyalty) {}
};
void main() {
	CatDog combined("Murzik", 2, 87, "Sharik", 2, 98);
	combined.information(3,3);
	
}