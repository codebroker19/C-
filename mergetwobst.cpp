/*
void inorder1(Node*root,vector<int>&ans)
{
    if(root==NULL)
    return;
    inorder1(root->left,ans);
    ans.push_back(root->data);
    inorder1(root->right,ans);
    
}
void inorder2(Node*root,vector<int>&ans)
{
    if(root==NULL)
    return;
    inorder2(root->left,ans);
    ans.push_back(root->data);
    inorder2(root->right,ans);
    
}
vector<int> merge(Node *root1, Node *root2)
{
   vector<int>ans1;
   vector<int>ans2;
   inorder1(root1,ans1);
   inorder2(root2,ans2);
   vector<int>v(ans1.size()+ans2.size());
   merge(ans1.begin(),ans1.end(),ans2.begin(),ans2.end(),v.begin());
   return v;
   
}
*/
//Above solution will also work but requires more space and less efficient
void inorder(Node*root,vector<int>&ans)
{
    if(root==NULL)
    return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
struct Node*minimumvalue(Node*root)
{
    Node*temp=root;
    while(temp->left!=NULL)
    temp=temp->left;
    return temp;
}
vector<int> merge(Node *root1, Node *root2)
{
  stack<Node*>s1;
  stack<Node*>s2;
  Node*temp1=root1;
  Node*temp2=root2;
  vector<int>ans;
  
  if(temp1==NULL)
  {
      inorder(temp2,ans);
      return ans;
  }
  if(temp2==NULL)
  {
      inorder(temp1,ans);
      return ans;
  }
  while(temp1!=NULL||temp2!=NULL||!s1.empty()||!s2.empty())
  {
      if(temp1!=NULL||temp2!=NULL)
      {
          if(temp1!=NULL)
          {
              s1.push(temp1);
              temp1=temp1->left;
          }
          if(temp2!=NULL)
          {
              s2.push(temp2);
              temp2=temp2->left;
          }
      }
      else
      {
          if(s1.empty())
          {
              while(!s2.empty())
              {
                  temp2=s2.top();
                  s2.pop();
                  temp2->left=NULL;
                  inorder(temp2,ans);
              }
              return ans;
          }
          if(s2.empty())
          {
              while(!s1.empty())
              {
                  temp1=s1.top();
                  s1.pop();
                  temp1->left=NULL;
                  inorder(temp1,ans);
              }
              return ans;
          }
          temp1=s1.top();
          temp2=s2.top();
          s1.pop();
          s2.pop();
          if(temp1->data<temp2->data)
          {
              ans.push_back(temp1->data);
              temp1=temp1->right;
              s2.push(temp2);
              temp2=NULL;
          }
          else
          {
              ans.push_back(temp2->data);
              temp2=temp2->right;
              s1.push(temp1);
              temp1=NULL;
          }
      }
  }
  return ans;
  
}