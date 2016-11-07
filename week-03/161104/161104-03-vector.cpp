#include <iostream>
#include <string>
#include <cmath>


using namespace std;

struct Vector {
  double* storage;
  int size;
};

Vector* vector_construct (double input[], int size);

double vector_at (Vector& v, unsigned int index);

void vector_insert (Vector& v, unsigned int index, double value);

unsigned int vector_find(Vector& v, double value);


void vector_remove(Vector& v, unsigned int index);

Vector* vector_concat(Vector& v1, Vector v2) {
  int new_size = v1.size+v2.size;
  double* new_storage = new double[new_size];
  for (int i = 0; i < new_size; i++) {
    new_storage[i] = i < v1.size ? v1.storage[i] : v2.storage[i-v1.size];
  }
  Vector* new_vector = vector_construct(new_storage, new_size);
  return new_vector;
}

int main() {
  double my_array[] = {0.1, 1.2, 2.2, 3.3, 4.4};
  Vector* my_vector = vector_construct(my_array, 5);
  Vector* my_vector2 = vector_construct(my_array, 5);
  cout << "Initial size: " << my_vector->size << endl;
  cout << "Value at index 3: " << vector_at(*my_vector, 3) << endl;
  vector_insert(*my_vector, 2, 6.1);
  cout << "Size of the vector after inserting to index 2: " << my_vector->size << endl;
  cout << "The index of the newly inserted 6.1: " << vector_find(*my_vector, 6.1) << endl;
  vector_remove(*my_vector, 1);
  cout << "Size of the stack after removing the 1st element: " << my_vector->size << endl;
  cout << "Value at index 1: " << vector_at(*my_vector, 1) << endl;
  Vector* my_vector3 = vector_concat(*my_vector, *my_vector2);
  cout << "Size of the new vector after concatenate: " << my_vector3->size << endl;
  delete[] my_vector->storage;
  delete my_vector;
  delete[] my_vector2->storage;
  delete my_vector2;
  delete[] my_vector3->storage;
  delete my_vector3;
  return 0;
}

Vector* vector_construct(double input[], int size) {
  Vector* newVector = new Vector;
  newVector->storage = new double[size];
  for (int i = 0; i < size; i++) {
    newVector->storage[i] = input[i];
  }
  newVector->size = size;
  return newVector;
}

double vector_at(Vector& v, unsigned int index) {
  return (index < v.size) ? v.storage[index] : 0;
}

void vector_insert(Vector& v, unsigned int index, double value) {
  double* new_storage = new double[++v.size];
  for (int i = 0; i < v.size+1; i++) {
    if (i < index) {
      new_storage[i] = v.storage[i];
    } else if (i == index) {
      new_storage[i] = value;
    } else {
      new_storage[i] = v.storage[i-1];
    }
  }
  delete v.storage;
  v.storage = new_storage;
}

unsigned int vector_find(Vector& v, double value) {
  unsigned int result = 0;
  for (int i = 0; i < v.size; i++) {
    if (v.storage[i] == value) result = i;
  }
  return result;
}

void vector_remove(Vector& v, unsigned int index) {
  double* new_storage = new double[--v.size];
  for (int i = 0; i < v.size; i++) {
    new_storage[i] = i < index ? v.storage[i] : v.storage[i+1];
  }
  delete v.storage;
  v.storage = new_storage;
}
