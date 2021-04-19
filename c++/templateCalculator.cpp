#include <iostream>
using namespace std;
 
template <class T>
class Calculator
{
private:
        T num1, num2;
        
public:
        Calculator(T n1, T n2)
        {
                num1 = n1;
                num2 = n2;
        }
        
        void displayResult()
        {
                cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
                cout << "Addition is: " << add() << endl;
                cout << "Subtraction is: " << subtract() << endl;
                cout << "Product is: " << multiply() << endl;
                cout << "Division is: " << divide() << endl;
        }
        
        T add() { return num1 + num2; }
        
        T subtract() { return num1 - num2; }
        
        T multiply() { return num1 * num2; }
        
        T divide() { return num1 / num2; }
};
 
int main()
{
	int x,y;
	float a,b;
	cout<<"\n ENter int numbers : \t";
	cin>>x>>y;
	cout<<"\n ENter float numbers : \t";
	cin>>a>>b;
	
        Calculator<int> intCalc(x, y);
        Calculator<float> floatCalc(a, b);
        
        cout << "Int results:" << endl;
        intCalc.displayResult();
        
        cout << endl << "Float results:" << endl;
        floatCalc.displayResult();
        
        return 0;
}
