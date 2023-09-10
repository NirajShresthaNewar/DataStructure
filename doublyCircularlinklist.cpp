#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#define  null NULL

struct node{
	int info;
	struct node *next;
	struct node *prev;
	
};
struct node *header=NULL;
struct node *getnode(int n)
{
	struct node *ptrnew  =(struct node*)malloc(sizeof(struct node));
	if(ptrnew==NULL)
	{
		printf("memory alocation failed:");
		getch();
		
		exit(0);
	}
	ptrnew->info=n;
	ptrnew->next=ptrnew->prev=null;
	return ptrnew;
}

	
int main()
{
	char ch;
	while (1)
	{
		system("cls");
		printf("\nSELECT OPTION\n1.InsertAtfront\n2.InsertAtBack\n3.AtBack\n4.insertBefore\n5.Display\n6.removefromfront\n");
		printf("7.removeFromLast\n8.RemoveANy\n9.Exit\n\n");
		ch = getche();
		switch (ch)
		{
		case '1':
			insertAtFront();
			break;
		case '2':
			insertAtBack();
			break;
		case '3':
			atBack();
			break;
		case '4':
			insertBefore();
			break;
			
			case '5':
				printf("\n");
			display();
			break;
			
				case '6':
				removefromfront();
			break;
			
			case '7':
				removeFromLast();
				break;
				
			case'8':
				removeAny();
				break;
				
		default:
			printf("\nInvalid Option");
			break;
		}
		getch();
	}
}


