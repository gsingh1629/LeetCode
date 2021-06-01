//ADD TWO NUMBERS

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *ans=new ListNode(0);
      int sum=0,carry=0;
      ListNode *res=ans;
      while(l1||l2){
          sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
          carry=sum/10;
          ans->next=new ListNode(sum%10);
          ans=ans->next;
          l1=l1?l1->next:NULL;
          l2=l2?l2->next:NULL;
      }
      if(carry){
          ans->next=new ListNode(carry);
      }
      return res->next;
  }
