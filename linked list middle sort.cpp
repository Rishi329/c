class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
      vector<int>v;
      while(head!=NULL){
          v.push_back(head->data);
          head = head -> next;
      }
      return v[v.size()/2];
    }
};
