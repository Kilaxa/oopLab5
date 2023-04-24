// C������ � ������-������ ����������� ����������� � ����������� ����������, ����� ����� ����������� ���������� � ��� �� ��������?
// ���� ����� �� �����������, �� ��� �������� ������� ������, ������������� ��������� ��� ������ ������ ��������, ����� ������ ����� ������, � �� �������.
#include <vector>
#include "Animals.h"
using namespace std;

int main() 
{
	vector<Animal*> animals(2);
	animals[0] = new Animal();
	animals[1] = new Cat();
	cout << "Non Virtual:" << endl;
	for (auto someAnimal : animals) {
		cout << someAnimal->voice() << endl;
	}
	delete animals[0];
	delete animals[1];
	cout << endl;

	vector<AnimalCorrect*> correctAnimals(2);
	correctAnimals[0] = new AnimalCorrect();
	correctAnimals[1] = new CatCorrect();
	cout << "Virtual:" << endl;
	for (auto someAnimal : correctAnimals) {
		cout << someAnimal->voice() << endl;
	}
	delete correctAnimals[0];
	delete correctAnimals[1];
	cout << endl;
	return 0;
}
