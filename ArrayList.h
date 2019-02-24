#include <stdlib.h>
#include <time.h>

template <class T>
class  ArrayList
{

private:

	int size;
	int factor;
	T *array;

public:

	ArrayList()
	{
		ArrayList(10);
	}

	ArrayList(int factor)
	{
		if (factor <= 0) factor = 1;
		size = 0;
		this->factor = factor;
		array = new T[factor];
	}

	ArrayList(const ArrayList &copy)
	{
		ArrayList(copy.size);
		for (int i = 0; i < copy.size; i++)
			this->add(copy.array[i]) ;
	}

	void add(T value )
	{
		if(size==factor) resize();
		array[size++] = value;
	}

	bool set(int index, T value)
	{
		if (index >= size || index < 0) return false;
			
		array[index] = value;
		return true;
		
	}

	int Size()
	{
		return this->size;
	}

	T get(int index)
	{
		if (index >= size || index < 0) return -1;
		return array[index];
	}
	
	bool remove(int index)
	{
		if (index >= size || index < 0) return false;
	    return  resize(index);
	}

	void clear()
	{
		size = 0;
		factor = 10;
		array = new T[factor];
	}

	bool isEmpty()
	{
		if (size > 0) return false;
		else return true;
	}

	T *toArray()
	{
		return array;
	}

	void shuffle()
	{
		if (size >= 2)
		{
			int *randIndex = new int[size];
			srand(time(NULL));
			for (int i = 0; i < size; i++) randIndex[i] = std::rand() % size;

			for (int i = 0; i < (size-1); i++)
				swap(array[randIndex[i]], array[randIndex[i + 1]]);

			delete[] randIndex;
			
		
		}
	}

	void reverse()
	{
		int end = size -1;
		for (int i = 0; i < (size / 2); i++)
			swap(array[i], array[end--]);
	}

	bool removeRange(int start, int stop)
	{
		if (start<0 || start>=stop || stop>=size) return false;
		for (int i = 0; i <= (stop - start); i++)
			remove(start);

		return true;
	}

	int searchElement(T value)
	{
		for (int i = 0; i < size; i++)
			if (array[i] == value) return i;

		return -1;
	}

	~ArrayList()
	{
		delete[] array;
	}

private:

	void swap(T& value, T& value2)
	{
		T temp = value;
		value = value2;
		value2 = temp;
	}

	void copy(T copy[], T target[])
	{
		for (int i = 0; i < size; i++) 	copy[i] = target[i];
	}

	bool resize(int index)
	{
		
		T *temp = new T[size];
		int count= 0;
		for (int i = 0; i < size; i++)
		{
			if (i != index)
				temp[count++] = array[i];
		}
		
		array = new T[factor];
		copy(array, temp);
		size--;
		delete[] temp;
		return true;
	}

	void resize()
	{
		factor += 10;
		T *temp = new T[size];
		
		copy(temp, array);	
		array = new T[factor];
		copy(array, temp);

		delete[] temp;
	}

};






