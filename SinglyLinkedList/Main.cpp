#include "ListFunctions.h"

int main()
{
	node *head = NULL;
	node *last = NULL;
	char choice; 
	int number;
	do
	{
		choice = menu();
		switch (choice)
		{
			case '1':
				cout << "Please neter a number: ";
				cin >> number;
				insert(head, last, number);
				break;
			case '2':
				remove(head, last, number);
				break;
			case '3':
				showList(head);
				break;
			default:
				cout << "System exit\n";

		}
	}
	while (choice != '4');
	return 0;
}