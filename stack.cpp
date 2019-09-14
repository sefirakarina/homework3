#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>
using namespace std;

//SEFIRA KARINA

struct Node
{
	int number;
	struct Node *next;

} *head, * tail, *temp;

void printStacks(struct Node *head)
{

    if(head != NULL)
    {
        printStacks(head->next);

        cout<<" "<<head->number;
		//head=head->next;
		//temp=temp->next;
    }

    else
        return;


}

void deleteNode()
{
    Node *ptrNode;


    if (!head)//don't do anything if the list is empty
        return;

    else
    {
        ptrNode = head->next;
        delete head;
        head = ptrNode;
    }
}

void addNode(int x)
{
	temp = new Node;
	temp->number = x;

	if(head==NULL)
    {
        head=tail=temp;
        tail->next=NULL;
    }
    else{
        temp->next=head;
        head=temp;
    }

}

int main(void)
{
    head=tail=NULL;

    addNode(5);
	addNode(3);
	addNode(1);
	addNode(9);

    int x;
    int choice;

    //cout<<"SEFIRA KARINA"<<endl<<endl;

    cout<<"here's the stack : ";
    printStacks(head);

    while(1)
    {

        cout<<endl<<endl<<"1.push" <<endl<<"2.pop "<<endl<<"3.exit"<<endl<<"choose (1-3) : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<endl<<"input a number to push : ";
                cin>>x;
                addNode(x);

                cout<<endl<<"here's the new stack : ";
                printStacks(head);

                break;
            case 2:
                deleteNode();
                cout<<endl<<"here's the new stack : ";
                printStacks(head);
                break;

            case 3:
                return 0;

            default:
                cout<<"\nPlease enter correct choice(1-2)!!";
                break;
        }
    }


}
