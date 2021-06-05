class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1,*ptr2=l2;
        int forwd=0,tmp;
        queue<int> Nodes;
        while(ptr1!=nullptr&&ptr2!=nullptr){
            tmp=ptr1->val+ptr2->val+forwd;
            Nodes.push(tmp%10);
            forwd=tmp/10;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr1!=nullptr){
                tmp=ptr1->val+forwd;
                Nodes.push(tmp%10);
                forwd=tmp/10;
                ptr1=ptr1->next;
        }
        while(ptr2!=nullptr){
                tmp=ptr2->val+forwd;
                Nodes.push(tmp%10);
                forwd=tmp/10;
                ptr2=ptr2->next;
        }
        if(forwd!=0)
        Nodes.push(forwd);
        ListNode* head=new ListNode(Nodes.front());
        Nodes.pop();
        ListNode* tmp_ptr=head;
        while(!Nodes.empty()){
            tmp_ptr->next=new ListNode(Nodes.front());
            tmp_ptr=tmp_ptr->next;
            Nodes.pop();
        }
        return head;
    }
};
