#include <iostream>
#include <string>
#include <cmath>


using namespace std;

struct Stack {
  double* storage;
  int size;
};

Stack* construct_stack (double input[], int size);

void stack_push(Stack& stack, double value);

double stack_pop(Stack& stack);

bool is_stack_empty(Stack& stack);


int main() {

  double my_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  int size = sizeof(my_array);

  Stack* constructed_stack = construct_stack(my_array, size);

  cout << "Initial size of the stack: " << size << endl;
  stack_push(*constructed_stack, 6.6);
  cout << "Size of the stack after pushing: " << constructed_stack->size << endl;
  cout << "Popping the pushed value: " << stack_pop(*constructed_stack) << endl;
  cout << "Size of the stack after popping: " << constructed_stack -> size << endl;
  cout << "Is the stack empty: " << is_stack_empty(*constructed_stack) << endl;

  delete[] constructed_stack->storage;
  delete constructed_stack;

  return 0;
}

Stack* construct_stack (double input[], int size) {
  Stack* newStack = new Stack;
  newStack->storage = new double[size];
  for (int i = 0; i < size; i++) {
    newStack->storage[i] = input[i];
  }
  newStack->size = size;
  return newStack;
}

void stack_push(Stack& stack, double value) {
  double* newStorage = new double[stack.size + 1];
  for (int i = 0; i < stack.size; i++){
    newStorage[i] = stack.storage[i];
    }
  newStorage[stack.size] = value;
  delete[] stack.storage;
  delete &stack;
  stack.storage = newStorage;
  stack.size++; // or: stack = *newStorage;
}


double stack_pop(Stack& stack) {
  double popped = stack.storage[stack.size-1];
  double* newStorage = new double[--stack.size];
  for (int i = 0; i < stack.size; i++) {
    newStorage[i] = stack.storage[i];
  }
  Stack* newStack = construct_stack(newStorage, stack.size);
  delete[] stack.storage;
  delete &stack;
  stack.storage = newStorage;
  stack.size++;
  return popped;
}

bool is_stack_empty(Stack& stack) {
  return stack.size == 0;
}
