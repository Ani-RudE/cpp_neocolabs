#include <iostream>
using namespace std;
class test {
    int obj;
    static int i;
  
public:
    test ()
    {
    obj = ++i;
    }
    
    void printobj(void)
    {
        cout << "object number :" << obj << "\n";
    }
    static void showcount(void)
    {
        cout << "count:" << i << "\n";
    }
};
int test::i;
int main()
{
    test t1, t2, t3;
    test::showcount();
  
    t1.printobj(); 
    t2.printobj(); 
    t3.printobj();
    return 0;
}