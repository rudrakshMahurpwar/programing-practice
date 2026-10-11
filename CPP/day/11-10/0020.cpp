#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Stack
{
	int size;
	int tos;

	T * s;

	bool overflow()
	{
		return (tos == size -1) ?
			true : false ;
	}

	bool underflow()
	{
		return (tos == -1) ?
			true : false;
	}

	public:
	Stack(int size) : size(size)
	{
		tos = -1;
		s = new T[size];
	}

	~Stack()
	{
		delete[] s;
	}

	void push(T ele)
	{
		if (overflow())
		{
			throw overflow_error("Stack overflow");
		}
			s[++tos] = ele;
	}

	T pop()
	{
		if (underflow())
		{
			throw underflow_error("Stack is empty");
		}
		return s[tos--];
	}

	void display()
	{
		if (!underflow())
		{
			for (int i = 0; i < tos ; i++)
			{
				cout << s[i] << " " << endl;
			}
		}
	}

};

int main()
{
    Stack<int> st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack elements (top to bottom):\n";
    st.display();

    cout << "Popped: " << st.pop() << '\n';

    return 0;
}
