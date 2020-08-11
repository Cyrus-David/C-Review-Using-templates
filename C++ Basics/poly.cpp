#include <iostream>

using namespace std;

class Animal{
  public:
    void getFamily(){ cout << "We are animals!" << endl;}

    virtual void getClass(){ cout << "I am an Animal" << endl; }

};

class Dog : public Animal{
  public:
    void getClass() { cout << "I am a dog" << endl; }
};

class GermanShepherd : public Dog{
  public:
    void getClass() { cout << "I am a German Shepherd" << endl; }
    void getDerived() { cout << "I'm an animal and a Dog." << endl; }

};

void whatClassAreYou(Animal *animal){
  animal -> getClass();
}

int main(){

  Animal *animal = new Animal;
  Dog *dog = new Dog;

  animal -> getClass();
  dog -> getClass();

  whatClassAreYou(animal);
  whatClassAreYou(dog);

  Dog spot;
  GermanShepherd max;

  Animal* ptrDog = &spot;
  Animal* ptrGermanShepherd = &max;

  ptrDog -> getFamily();
  ptrDog -> getClass();
  ptrGermanShepherd -> getFamily();
  ptrGermanShepherd -> getClass();

}