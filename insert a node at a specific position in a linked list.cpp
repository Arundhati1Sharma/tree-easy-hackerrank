SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
            SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
            SinglyLinkedListNode *nh= head;
            for(int i=0;i<position-1;i++)
            {
                nh=nh->next;
            }
            SinglyLinkedListNode *t;
            t=nh->next ;
            nh->next=temp;
            temp->next=t;
            return head;
              }