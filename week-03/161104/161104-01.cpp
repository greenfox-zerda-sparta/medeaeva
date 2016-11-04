//needs work

#include <iostream>
#include <string>
#include <cmath>


using namespace std;

struct Stack {
  double storage_area;
  int size;
};

bool is_stack_empty (Stack& stack) {
  return stack.size == 0;
}

Stack* construct_stack (double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->storage_area = new double[size];
  for (int i = 0, i < size, ++i) {
    new_stack -> storage_area[i] = input[i];
    }
  new_stack -> size = size;
  return new_stack;
}

void stack_push(Stack& stack, double value) {
  double* new_storage_area = new double[++stack.size];
  for (i = 0, i < stack.size, i++) {
    new_storage_area[i] = i < stack.size-1 ? stack.storage_area[i] : value;
  }
  delete[] stack.storage_area;
  stack.storage_area = new_storage_area;
}

double stack_pop(Stack& stack) {
  double result = stack.storage_area[stack.size-1];
  double* new_storage_area = new double[--stack.size];
  for (int i = 0; i < stack.size; ++i) {
    new_storage_area[i] = stack.storage_area[i];
   }
  delete[] stack.storage_area;
  stack.storage_area = new_storage_area;
  return result;
 }



int main() {

  double example_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  int size = sizeof (example_array);

  Stack* example_stack = construct_stack (example_array[], size);

  cout << "Initial size of the stack: " << size << endl;
  stack_push(*example_stack, 5.5);
  cout << "Size of the stack after pushing: " << example_stack->size << endl;
  cout << "Popping the pushed value: " << stack_pop(*example_stack) << endl;
  cout << "Size of the stack after popping: " << example_stack -> size << endl;
  cout << "Is the stack empty: " << is_stack_empty(*example_stack) << endl;

  delete[] example_stack -> storage_area;
  delete example_stack;

  return 0;
}
