#include <iostream>
using namespace std;

class sorting
{
private:
    int a[1001]; // data members
    int size;    // size of the array
public:
    void InsertSort()
    {
        int key, j;
        for (int i = 1; i < this->size; i++)
        {
            key = this->a[i];
            j = i - 1;
            while (j >= 0 && ((this->a[j] > key) || (this->a[j] < key)))
            {
                this->a[j + 1] = this->a[j];
                j = j - 1;
            }
            this->a[j + 1] = key;
        }
    }
    void BubbleSort(){
    bool sortat;
	int m = size;
	do
	{
		sortat = true;
		int p = m;
		for (int i = 0; i < p - 1; i++)
			if ((this->a[i] > this->a[i + 1]) || (this->a[i] < this->a[i + 1])) {
				swap(this->a[i], this->a[i + 1]);
				sortat = false;
				m = i + 1;
			}
	} while (!sortat);
    }
};
