class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL){
            return head;
        }

        Node* current = head;

        while(current != NULL){

            if(current->child != NULL){

                Node* next = current->next;

                current->next = flatten(current->child);

                current->child = NULL;

                current->next->prev = current;

                while(current->next != NULL){
                    current = current->next;
                }

                if(next != NULL){
                    current->next = next;
                    next->prev = current;
                }
            }

            current = current->next;
        }

        return head;
    }
};