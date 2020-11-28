#include <iostream>
#include <string>
using namespace std;

class Homework
{
	private:
		const int step_cost = 1; // Constant for each step
		int path_cost = 0; // Initially 0
		int fringe[7]; // Creating fringe as it may have max node value 6 + initial
	public:
		Homework(int n) // Constructor
		{
			if (expandFunction(n) != -1) // We supposed -1 as failure and this looks is the search find a solution
			{
				cout << "The solution is " << expandFunction(n) << endl;  // Printing the solution comes from expand function
				cout << "Also the taken path is like:" << endl;
				for (int i = 0; i < 7; i++) // Printing the path map
				{
					cout << fringe[i] << endl;
				}
				cout << "Path cost is " << getPathCost() << endl; // Printing the total path cost
			}
			else cout << "The program failed" << endl; // If the returned value is -1 it means the program failed
		}
		int expandFunction(int n) // Expand function
		{
			int m = 0; // A value that will keep the index of fringe
			fringe[m] = successorFunction(n); // Expanding initial state value
			path_cost += step_cost; // Adding a cost for the first expanding
			while (m < 7) // The loop will turn till the last situation
			{
				for (int i = 1; i < 3; i++) // Loop for 2 states (n+1 and n+2)
				{
					m++;
					fringe[m] = successorFunction(n + i); // Adding expanded nodes into the fringe
					if (isBiggerThanThree(successorFunction(n + i))) return successorFunction(n + i); // Goal test function looks if it is the goal or not
				}
				n++; // To make it n+1 to n+2
				path_cost += step_cost; // Adding step cost
			}
			return -1; // It returns failure
		}
		int successorFunction(int n) // Successor function
		{
			return n % 6;
		}
		bool isBiggerThanThree(int n) // Goal test function
		{
			if (n > 3) return true;
			else return false;
		}
		int getPathCost() // The function returns path cost
		{
			return path_cost;
		}
};

void main()
{
	int n = 0; // Our initial state is 0 
	Homework obj(n); // Creating object
	system("Pause");
}