#include<bits/stdc++.h>
using namespace std;
int main(){
	struct Tnode{
		int length;
		struct Tnode *left;
		struct Tnode *right;
	};
	struct List{
		Tnode *root;
		struct List *next;

	List *start=NULL;
	List *end=NULL;
	List *m;
	List *temp;	};
}
void getnode(){
	struct *m=new List();
	m->root=new Tnode();
	cin>>m->root->length;
	m->root->left=NULL;
	m->root->right=NULL;
	m->next=NULL;
}
void insert(){
	if(start==NULL){
		start=m;
		end=m;
	}
	else if (start->roo->length>=m->root->length)
{
	m->next=start;
	start=m;
}
else if(end->root->length<+m->root->length){
	end->next=m;
	end=m;
}
else{
	temp=start;
	while(temp->nxt->root->length<length<m->root->length)
		temp=temp->next;
}
m->next=temp->next;
temp->next=m;
}
Tnode *least(Tnode *temp){
	if(start==end){
		start=NULL;
		end=NULL;
	}
	else{
		start=start->next;
		return temp;
	}
}
int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	for(int i=0;i<n;i++){
		getnode();
		insert();
	}
	int temp=start;
	for(int i=0;i<n-1;i++)
		temp=temp->next;
	int total=0;
	for(int i=0;i<n-1;i++){
		m= new List();
		m->root=new Tnode();
		m->root->left=Least(start->root);
		m->root->right=Least(start->root);
		m->root->length=m->root->left->length+m->root->right->length;
		total+=m->root->length;
		Insert();
	}
	cout<<"answer"<<total;
	return 0;
}
