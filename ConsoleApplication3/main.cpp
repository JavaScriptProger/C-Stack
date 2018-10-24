#include<stdio.h>
#include<stdlib.h>

class Stack
{
public:
	virtual void add(int v) = 0;
	virtual int get(void) = 0;
protected:
	int arr[10];
	int index = 0;
};

class StackStore : public Stack
{
public:
	void add(int v) {
		this->arr[index] = v;
		index++;
	}

	int get(void) {
		index--;
		if (index < 0) return 1;
				
		storage[sIndex] = arr[index];
		sIndex++;

		return arr[index];
	}

	int getStorage(int i) {
		return storage[i];
	}
private:
	int storage[10];
	int sIndex = 0;
};

int main() {
	StackStore stack;
	stack.add(10);
	stack.add(11);

	printf("%i\n", stack.get());
	printf("%i\n", stack.getStorage(0));

	printf("%i\n", stack.get());
	printf("%i\n", stack.getStorage(0));
	system("pause");
	return 0;
}