#include <iostream>

using namespace std;

class Animal{
  public:
    virtual void makeSound(){ cout << "The animals says grrrrr" << endl; }

};

class Dog : public Animal{
  public:
    void makeSound(){ cout << "The animals says woof" << endl; }

  
};

class Cat : public Animal{
  public:
    virtual void makeSound(){ cout << "The animals says meoow" << endl; }
  
};

class Car{
  public:
      virtual void getNumWheels() = 0;
      virtual void getNumDoors() = 0;

};

class StationWagon : public Car{
  public:
    void getNumWheels(){ cout << "Station Wagon has 4 wheels." << endl; };

    void getNumDoors(){ cout << "Station Wagon has 4 doors." << endl; };

    StationWagon(){}
    ~StationWagon();

};

int main(){
    Animal* pCat = new Cat;
    Animal* pDog = new Dog;

    pCat -> makeSound();
    pDog -> makeSound();

    Car* stationWagon = new StationWagon;

    stationWagon -> getNumDoors();  
    stationWagon -> getNumWheels();

    return 0;
}