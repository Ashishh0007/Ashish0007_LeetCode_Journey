//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.

int solve(Node *head, int& n) {
    if(head == NULL)
        return -1;
    
      
    int ans = solve(head->next, n);
    n--;
    if(n == 0) {
        ans = head->data;
    }
    return ans;
}

int getNthFromLast(Node *head, int n)
{
    //return solve(head, n);

    int cnt = 0;
    Node* temp = head;
    
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    
    if(n > cnt)
        return -1;
        
    int x = cnt-n+1;
    int i = 1;
    int ans = head->data;
    
    while(i <= x) {
        if(i == x)
            return head->data;
            
        head = head->next;
        i++;
    }
}

