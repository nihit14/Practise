#include <iostream>
#include <cassert>
class Stack
{
private:
    const int m_maxLength{10};
    int m_stackArray[m_maxLength];
    int m_next=0;
public:
    void reset()
    { // sets the length to 0;
        m_next=0;
	// constructor
    }
    bool push(int a)
    {
     // returns true/ false for push and push the  value on the stack.
        if(m_next==m_maxLength)
            {
                return false;
            }
        m_stackArray[m_next]=a;
        ++m_next;
        return true;
        }

    }
    int pop()
    {
        // pops the value from the stack. FILO
        assert(if(m_next>0 &&  "Cannot empty the empty stack");
        return [--m_next]



    }
    void print()
    {
        // prints the complete stack in ();

    		std::cout << "( ";
    		for (int i = 0; i < m_next; ++i)
			std::cout << m_array[i] << ' ';
            std::cout << ")\n";
    }

};
