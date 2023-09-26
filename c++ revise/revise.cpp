// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     int ans =0;
//     while (n!=0)
//     {
//         int bit = n&1;
//         ans = (bit*pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     }
//     cout<<ans;

// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int ans =0;
//     int i =0;
//     while (n!=0)
//     {
//         int digit = n%10;
//         if(digit ==1){
//             ans = digit*pow(2,i) + ans;
//         }
//        n/=10;
//         i++;
//     }
//     cout<<ans;

// }

// #include <iostream>

// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++)
//     {
//         if(i==2 || i==3 || i==5){
//             cout<<i<<" ";
//         }
//         if(i%2!=0 && i%3!=0 && i%5!=0){
//             cout<<i<<" ";
//         }
//     }
// }
// #include <iostream>
// using namespace std;
// class Queue
// {
//     int size;
//     int rear;
//     int front;
//     int *arr;

// public:
//     Queue()
//     {
//         size = 10001;
//         arr = new int[size];
//         rear = 0;
//         front =0;
//     }

//     bool isEmpty(){
//         if(front == rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     void push(int data){
//         if(rear == size){
//             cout<<"stack is full";
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     int deque(){
//         if(front == rear){
//             return -1;
//         }
//         else{
//             int ans = arr[front];
//             arr[front] = -1;
//             front++;
//             if(front == rear){
//                 front =0;
//                 rear =0;
//             }
//             return ans;
//         }
//     }
//     int frontE(){
//         if(front == rear){
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
// };
// #include <iostream>
// using namespace std;
// class Queue{
//     int size;
//     int *arr;
//     int rear;
//     int front;
//     public:
//     Queue(){
//         size = 10001;
//         arr = new int[size];
//         front = rear =-1;
//     }
//    bool push(int data){
//     if((front ==-1 && rear == size-1) || (rear == (front-1)%(size-1))){
//         return false;
//     }
//     else if (front == -1)
//     {
//         front = rear = 0;
//     }
//     else if (rear == size-1)
//     {
//         rear = 0;
//     }
//     else{
//         rear++;
//     }
//     arr[rear] = data;
//     return true;

//    }

//    int deque(){
//     if (front ==-1)
//     {
//         return false;
//     }
//     int ans = arr[front];
//     arr[front] = -1;
//     if(front == rear){
//         front = rear = -1;
//     }
//     else if (front ==rear)
//     {
//         front = rear = -1;
//     }
//     else if (front == size-1)
//     {
//         front =0;
//     }
//     else{
//         front++;
//     }
//     return ans;

//    }
// };

// #include <iostream>
// using namespace std;
// class Queue{
//     int size;
//     int *arr;
//     int rear;
//     int front;
//     public:
//     Queue(){
//         size = 10001;
//         arr = new int[size];
//         front = rear =-1;
//     }
//     bool push_front(int data){
//         if(isFull()){
//             return false;
//         }
//         else if (isEmpty())
//         {
//             front = rear = 0;
//         }
//         else if (front ==0 && rear != size-1)
//         {
//             front =size-1;
//         }
//         else{
//             front--;
//         }
//         arr[front] = data;
//         return true;

//     }

//     bool pushRear(int data){
//         if(isFull()){
//             return false;
//         }
//         if (isEmpty())
//         {
//             front = rear = 0;
//         }
//         else if (rear ==size-1 && front!=0)
//         {
//             rear = 0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = data;
//         return true;

//     }

//     bool popfront(){
//         if(isEmpty()){
//             return false;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if(front == rear){
//             front = rear = -1;
//         }
//         else if (front == size-1)
//         {
//             front =0;
//         }
//         else{
//             front++;
//         }
//         return ans;

//     }
//     int pop_back(){
//         if(isEmpty()){
//             return -1;
//         }
//         int ans = arr[rear];
//         arr[rear] = -1;
//         if(front== rear){
//             front = rear = -1;
//         }
//         else if (rear == 0)
//         {
//             rear = size-1;
//         }
//         else{
//             rear++;
//         }

//         return ans;

//     }
//     int getfront(){
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[front];
//     }
//     int getrear(){
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[rear];
//     }

//     bool isFull(){
//         if((front== 0 && rear == size-1) || (front!=0 && rear == (front-1)%(size-1))){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     bool isEmpty(){
//         if(front == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){

// }

// reversal of queue using stack
//  class Solution
//  {
//      public:
//      queue<int> rev(queue<int> q)
//      {
//         stack<int> s;
//         while(!q.empty()){
//             int ele = q.front();
//             q.pop();
//             s.push(ele);
//         }
//         while(!s.empty()){
//             int ele = s.top();
//             s.pop();
//             q.push(ele);
//         }
//         return q;
//      }

// };
// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//        stack<int> s;
//        while(!q.empty()){
//            int ele = q.front();
//            q.pop();
//            s.push(ele);
//        }
//        while(!s.empty()){
//            int ele = s.top();
//            s.pop();
//            q.push(ele);
//        }
//        return q;
//     }

// };

// int tour(petrolPump p[],int n)
// {
//   int deficit = 0;
//   int balance =0;
//   int start =0;
//   for(int i=0;i<n;i++){
//       balance+=p[i].petrol - p[i].distance;
//       if(balance<0){
//           deficit+=balance;
//           start = i+1;
//           balance =0;
//       }
//   }

//     if(deficit + balance>=0){
//         return start;
//     }
//     else{
//         return -1;
//     }
// }
//     #include <math.h>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n,t,maxi=0;
//     cin>>n;
//     int types[5] = {};
//     while (n--) {
//         cin>>t;
//         types[t-1]++;
//     }
//     for(int i=1;i<5;i++){
//         if(types[i]>types[maxi]) maxi =i;
//     }
//     cout<<maxi+1<<endl;

// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int b,n,m;
//     cin>>b>>n>>m;
//     int keyboard[n];
//     int drives[m];
//     for(int i=0;i<n;i++){
//         cin>>keyboard[i];
//     }
//     for(int j=0;j<m;j++){
//         cin>>drives[j];
//     }
//    int t=-1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(b>=keyboard[i]+drives[j]){
//                 t = max(t,keyboard[i]+drives[j]);
//             }

//         }}

//         cout<<t<<endl;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int q;
//     cin>>q;
//     int cat1 =0;
//     int cat2 =0;
//     vector<int> ans;
//     while (q--) {
//         int x,y,z;
//         cin>>x>>y>>z;
//         ans.push_back(x);
//         ans.push_back(y);
//         ans.push_back(z);
//         cat1 = abs(ans[2] - ans[0]) ;
//         cat2 = abs(ans[2] - ans[1]) ;
//         // cout<<cat2;
//         if(cat1==cat2){
//             cout<<"Mouse C";
//         }
//         if(cat1<cat2){
//             cout<<"Cat A"<<endl;
//         }
//         else if (cat2<cat1) {
//             cout<<"Cat B"<<endl;
//         }
//         ans.pop_back();
//         ans.pop_back();
//         ans.pop_back();

//     }
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int max =0,c=0,ele,maxi =0;
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         c=0;
//         for(int j=i+1;j<n;j++){
//             if(abs(a[i]-a[j])<=1){
//                 c++;
//                 if(c>maxi){
//                     maxi =c;
//                 }
//             }
//             else{
//                 c=0;
//                 break;
//             }
//         }
//     }
//     cout<<maxi+1<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,3,4,5,6,7};
//     int maxi = INT16_MIN;
//     for(int i=0;i<6;i++){
//         if(maxi<arr[i]){
//             maxi = arr[i];
//         }
//     }
//     cout<<maxi;
// }
// #include <iostream>
// using namespace std;
// void insertIoon(int *arr,int size){
//     for(int i=1;i<size-1;i++){
//         int j =i;
//         while (j>0 && arr[j-1]>arr[j])
//         {
//             swap(arr[j],arr[j-1]);
//             j--;
//         }

//     }

// }
// int main(){
//     int arr[] = {1,3,6,2,4};
//     insertIoon(arr,5);
//     for(int i:arr){
//         cout<<i;
//     }

// }
// #include <iostream>
// using namespace std;
// void selection(int *arr,int size){
//     for(int i=0;i<size-1;i++){
//         int minIndex =i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex =j;
//             }
//         }
//         if(minIndex!=i){
//             swap(arr[i],arr[minIndex]);
//         }
//     }
// }
// int main(){
//     int arr[] = {1,3,2,5,6};
//     selection(arr,5);
//     for(int i:arr){
//         cout<<i;
//     }
// }
// #include <iostream>
// using namespace std;
// class Queue{
//     int *arr;
//     int size;
//     int rear;
//     int front;
//     public:
//     Queue(){
//         size = 10001;
//         arr = new int[size];
//         rear = front =0;
//     }
//     void push(int data){
//         if(rear = size-1){
//             cout<<"stack is full";
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     void deque(){
//         if(rear = front==0){
//             cout<<"queue is empty";
//         }
//         else{
//             int ans = arr[front];
//             arr[front] =-1;
//             cout<<ans;
//         }
//     }
//     bool isEmpty(){
//         if(front= rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){

// }
// #include <iostream>
// using namespace std;
// class Queue{
//     int size;
//     int rear;
//     int front;
//     int *arr;
//     public:
//     Queue(){
//         size = 1001;
//         arr = new int[size];
//         front = rear =-1;
//     }
//   bool push(int data){
//     if((front ==0 && rear ==size-1) || (rear == (front-1)%(size-1))){
//         return false;
//     }
//     else if (front ==-1)
//     {
//         front = rear =0;
//     }
//     else if (rear ==size-1 && front!=0)
//     {
//         rear =0;
//     }
//     else{
//         rear++;
//     }
//     arr[rear] = data;
//     return true;

//   }
//   int deque(){
//     if(front==-1){
//         return -1;
//     }
//     int ans = arr[front];
//     arr[front] = -1;
//     if(front == rear){
//         front = rear =-1;
//     }
//     else if (front = size-1)
//     {
//         front =0;
//     }
//     else{
//         front++;
//     }
//     return ans;

//   }
// };
// int main(){

// }
// #include <iostream>
// using namespace std;
// class Queue{
//     int size;
//     int rear;
//     int front;
//     int *arr;
//     public:
//     Queue(){
//         size = 1001;
//         arr = new int[size];
//         front = rear =-1;
//     }
//     bool pushfront(int data){
//         if(isFull()){
//             return false;
//         }
//         else if (isEmpty())
//         {
//             front = rear =0;

//         }
//         else if (rear !=size-1 && front==0)
//         {
//             front = size-1;
//         }
//         else{
//             front--;
//         }
//         arr[front] = data;
//         return true;

//     }

//     bool pushback(int data){
//         if(isFull()){
//             return -1;
//         }
//         else if(isEmpty()){
//             front = rear =0;
//         }
//         else if (front!=0 && rear == size-1)
//         {
//             size =0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = data;
//         return true;

//     }
//     int popfront(){
//         if(isEmpty()){
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if(front == rear){
//             front = rear =-1;
//         }
//         else if (front ==size-1)
//         {
//             front =0;
//         }
//         else{
//             front++;
//         }
//         return ans;

//     }
//     int popback(){
//         if(isEmpty()){
//             return -1;
//         }
//         int ans = arr[rear];
//         arr[rear] =-1;
//         if(front == rear){
//             front = rear =-1;
//         }
//         else if (rear ==0)
//         {
//             rear = size-1;
//         }
//         else{
//             rear--;
//         }
//         return ans;

//     }
//     bool isEmpty(){
//         if(front== -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool isFull(){
//         if((rear ==size-1 && front==0)||(rear==(front-1)%(size-1))){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,-3,6,-7,-3,5};
//     int size =6;
//     int max_so_far = INT16_MIN,max_ending_here =0;
//     for(int i=0;i<size;i++){
//         max_ending_here+=arr[i];
//         if(max_so_far<max_ending_here){
//             max_so_far =max_ending_here;
//         }
//         if(max_so_far<0){
//             max_so_far=0;
//         }
//     }
//     cout<<max_so_far;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(vector<string> &s, string str, string output, int i) {
//     if (i >= str.length()) {
//         if (output.length() > 0) {
//             s.push_back(output);
//         }
//         return;
//     }

//     // exclude
//     solve(s, str, output, i + 1);

//     // include
//     output.push_back(str[i]);
//     solve(s, str, output, i + 1);
// }

// vector<string> sub(string str) {
//     vector<string> ans;
//     string output = "";
//     solve(ans, str, output, 0);
//     return ans;
// }

// int main() {
//     string s = "abc";
//     vector<string> v = sub(s);
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void solve(vector<string> &s, string str, string output, int i)
// {
//     if (i >= str.length())
//     {
//         if (output.length() > 0)
//         {
//             s.push_back(output);
//         }
//         return;
//     }
//     // exclude
//     solve(s, str, output, i + 1);
//     output.push_back(str[i]);
//     solve(s, str, output, i + 1);
// }
// vector<string> sub(string &str)
// {
//     vector<string> ans;
//     string output = "";
//     solve(ans, str, output, 0);
//     return ans;
// }
// int main()
// {
//     string s = "abc";
//     vector<string> v = sub(s);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// }
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int d){
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node* buildTree(node* root){
//     cout<<"enter the data"<<endl;
//     int data;
//     cin>>data;
//     root = new node(data);
//     if(data ==-1){
//         return;
//     }
//     cout<<"enter the data to insert in left"<<data<<endl;
//     root->left = buildTree(root->left);
//     cout<<"enter the data to insert in right partt"<<data<<endl;
//     root->right = buildTree(root->right);
//     return root;

// }

// int main(){
//   node*  root = buildTree(root);

// }
#include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

//     ~node(){
//         int value = this->data;
//         if(this->next !=NULL){
//             delete  next;
//             this->next = NULL;

//         }
//     }

// };

// void insertAtHead(node* &head,int data){
//     node* temp = new node(data);
//     temp->next = head;
//     head =  temp;
// }

// void insertAtTail(node* &tail,int data){
//     node* temp =  new node(data);
//     tail->next = temp;
//     tail = temp;
// }
// void print(node* &head){
//     if(head ==NULL) cout<<"list is empty";
//     node* temp = head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;

// }
// void insertAtPos(node* &head,node* & tail,int pos,int data){
//     if(pos==1){
//         insertAtHead(head,data);
//     }
//     node* temp = head;
//     int cnt = 1;
//     while (cnt<pos-1)
//     {
//         temp = temp->next ;
//         cnt++;
//     }
//     if(temp->next ==NULL){
//         insertAtTail(tail,data);
//     }
//     node* nodeToInsert = new node(data);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;

// }
// void deleteNode(node* &head,int pos){
//     if(pos ==1){
//         node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else{
//         node* curr = head;
//         node* prev = NULL;
//         int cnt = 1;
//         while (cnt<pos)
//         {
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }

// }

// int main(){

// }
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *prev;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }

//     ~node()
//     {
//         int value = this->data;
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//     }
// };
// void insertAtHead(node *&tail, node *&head, int data)
// {
//     if (head == NULL)
//     {
//         node *temp = new node(data);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         node *temp = new node(data);
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }
// }
// void insertAtTail(node *&tail, node *&head, int data)
// {
//     if (tail == NULL)
//     {
//         node *temp = new node(data);
//         tail = temp;
//         head = temp;
//     }
//     else
//     {
//         node *temp = new node (data);
//         tail->next = temp;
//         temp->prev = tail;
//         tail = temp;


//     }
// }
// void insertAtPos(node* &head,node* &tail,int pos,int data){
//     if(pos ==1){
//         insertAtHead(head,tail,data);
//     }
//     node* temp = head;
//     int cnt =1;
//     while (cnt<pos-1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     if(temp->next ==NULL){
//         insertAtTail(tail,head,data);
//     }
//     node* nodeToInsert = new node(data);
//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
    
// }
// void deleteNode(int pos,node* &head,node* &tail){
//     if(pos ==1){
//         node* temp = head;
//         temp->next->prev = NULL;
//         head = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else{
//         node* curr = head;
//         node* prev = NULL;
       
//         int cnt =1;
//         while (cnt<pos-1)
//         {
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         curr->prev = NULL;
//         prev->next = curr->next;
//         curr->next = NULL;
//     }
// }
// int main()
// {
// }
// int beautifulDays(int i, int j, int k) {
//     int ans =0;
//     for(int el =i;el<=j;el++){
//         string s = to_string(el);
//         reverse(s.begin(), s.end());
//         if(abs(stoi(s) - el)%k==0) ans++;
//     }
//     return  ans;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int i ,j;
//     cin>>i>>j;
//     vector<int> v;

//     for(int a=i;a<=j;a++){
//         v.push_back(a);
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int i =5;
//     vector<int> v;
//     for(int i=1;i<=5;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     for(int i=0;i<5;i++){
//         cout<<v[i];
//     }
// }

// class Solution
// {
//     public:
//     void flatten(Node *root)
//     {
//         Node* curr = root;
//         while(curr!=NULL)
//         {
//             if(curr->left)
//             {
//                 Node* prec = curr->left;
//                 while(prec->right) 
//                     prec = prec->right;
                
//                 prec->right = curr->right;
//                 curr->right = curr->left;
//                 curr->left = NULL;
//             }
//             curr = curr->right;
//         }
//     }

// };