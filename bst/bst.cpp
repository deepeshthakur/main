// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data =data;
//         this->left = left;
//         this->right = right;
//     }
// };

// Node* insertIntoBst(Node* &root,int data){
//     if(root ==NULL){
//         root = new Node(data);
//         return root;
//     }
//     if(data>root->data){
//         root->right = insertIntoBst(root->right,data);
//     }
//     else{
//         root->left = insertIntoBst(root->left,data);
//     }
//     return root;
// }
// void takeInput(Node* &root ){
//     int data;
//     cin>>data;
//     while (data!=-1)
//     {
//         insertIntoBst(root,data);
//         cin>>data;
//     }

// }
// Node* miniVal(Node* &root){
//     while (root!=NULL)
//     {
//         root = root->left;
//         return root;
//     }

// }
// Node* deleteFromBst(Node* &root,int val){
//     if(root==NULL){
//         return root;
//     }
//     if(root->data==val){
//         //0th child
//     if(root->left ==NULL && root->right ==NULL){
//         delete root;
//         return NULL;
//     }

//      //1 child

//     if(root->left ==NULL && root->right !=NULL){
//         Node* temp = root->left;
//         delete root;
//         return temp;
//     }
//     if(root->left !=NULL && root->right ==NULL){
//         Node* temp = root->right;
//         delete root;
//         return temp;
//     }
//     if(root->left!=NULL && root->right !=NULL){
//         int mini = miniVal(root->right)->data;
//         root->data = mini;
//         root->right = deleteFromBst(root->right,mini);
//         return root;
//     }

//     }
//     else if (root->data>val)
//     {
//         root->left = deleteFromBst(root->left, val);
//         return root;
//     }
//     else{
//         root->right = deleteFromBst(root->right,val);
//         return root;
//     }

// }

// //by level order or any other traversal in trees
// int main(){
//     Node* root = NULL;
// }
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int data){
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;

//     }
// };
// node* insertIntoBst(node* root,int data){
//     if(root == NULL){
//         root = new node(data);
//         return root;
//     }
//     else if (root->data >data)
//     {
//         root->left = insertIntoBst(root->left,data);
//     }
//     else{
//         root->right = insertIntoBst(root->right,data);
//     }

// }
// bool seacrh(node* root,int val){
//     node* temp = root;
//     while (temp!=NULL)
//     {
//         if(temp->data == val){
//             return true;
//         }
//         else if (temp->data>val)
//         {
//             temp = temp->left;
//         }
//         else{
//             temp = temp->right;
//         }

//     }
//     return false;

// }
// node* minval(node* &root){
//     while (root!=NULL)
//     {
//         root = root->left;
//         return root;
//     }

// }
// node* maxVal(node* &root){
//     while (root!=NULL)
//     {
//         root = root->right;
//         return root;
//     }

// }
// node* deleteNode(node* &root,int val){
//     if(root==NULL){
//         return root;
//     }
//     if()
// }
// void data(node* &root,int data){
//     int data;
//     cin>>data;
//     while (data!=-1)
//     {
//         insertIntoBst(root,data);
//         cin>>data;
//     }

// }
// int main(){

// }

// #include <iostream>
// using namespace std;

// void merge(int *arr,int s,int e){
//     int mid = (s+e)/2;
//     int len1 = mid-s+1;
//     int len2 = e-mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     int mainIndex = s;
//     for(int i=0;i<len1;i++){
//         first[i] =arr[mainIndex++];
//     }
//     mainIndex = mid+1;
//     for(int i=0;i<len2;i++){
//         second[i] =arr[mainIndex++];
//     }

//     int index1 =0;
//     int index2 = 0;
//     mainIndex = s;
//     while (index1<len1 && index2<len2)
//     {
//         if(first[index1]<second[index2]){
//             arr[mainIndex++] = first[index1++];
//         }
//         else{
//             arr[mainIndex++] = second[index2++];
//         }
//     }
//     while (index1<len1)
//     {
//         arr[mainIndex++] = first[index1++];
//     }
//     while (index2<len2)
//     {
//         arr[mainIndex++] = second[index2++];
//     }

// }

// void mergeSort(int *arr,int s,int e){
//     int mid = (s+e)/2;
//     if(s>=e){
//         return;
//     }

//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);
// }
// int main(){

// }

// #include <iostream>
// using namespace std;

// #include <iostream>
// #include <algorithm>
// #include <cstdlib>

// int partition(int arr[], int s, int e) {
//     if (s >= e) {
//         return -1;
//     }

//     int randomIndex = s + rand() % (e - s + 1);
//     std::swap(arr[randomIndex], arr[s]);

//     int pivot = arr[s];
//     int cnt = std::count_if(arr + s + 1, arr + e + 1, [pivot](int x){ return x < pivot; });
//     int pivotIndex = s + cnt;

//     std::swap(arr[pivotIndex], arr[s]);

//     int i = s, j = e;
//     while (i <= pivotIndex && j > pivotIndex) {
//         while (arr[i] <= pivot) {
//             i++;
//         }
//         while (arr[j] > pivot) {
//             j--;
//         }
//         if (i <= pivotIndex && j > pivotIndex) {
//             std::swap(arr[i++], arr[j--]);
//         }
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[],int s,int e){

//     if(s>=e){

//         return;
//     }

//     int p = partition(arr,s,e);

//     quickSort(arr,s,p-1);

//     quickSort(arr,p+1,e);

// }
// int main(){
//     int arr[] = {1,4,2,6,3};
//     int e = 5;
//     quickSort(arr,0,e);
//     for(int i=0;i<e;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     int mainIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainIndex++];
//     }
//     mainIndex = mid+1;
//     for(int i=0;i<len2;i++){
//         second[i] = arr[mainIndex++];
//     }
//     int index1 = 0;
//     int index2 =0;
//     mainIndex =s;
//     while (index1<len1 && index2<len2)
//     {
//         if(first[index1]<second[index2]){
//             arr[mainIndex++] = first[index1++];
//         }
//         else{
//             arr[mainIndex++] = second[index2++];
//         }
//     }
//     while (index1<len1)
//     {
//         arr[mainIndex++] = first[index1++];
//     }
//     while (index2<len2)
//     {
//         arr[mainIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;

// }
// void mergeSort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid = (s+e)/2;
//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);
//     merge(arr,s,e);
// }
// int main()
// {
//     int arr[] = {1,4,2,0,3};
//     mergeSort(arr,0,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int pivot = arr[s];
//     int cnt =0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<pivot){
//             cnt++;
//         }
//     }
//     int pivotIndex = cnt+s;
//     swap(arr[pivotIndex],arr[s]);
//     int i=s,j=e;
//     while (i<pivotIndex && j>pivotIndex)
//     {
//        while (arr[i]<=pivot)
//        {
//         i++;
//        }
//        while (arr[j]>pivot  )
//        {
//         j--;
//        }
//        if(i<pivotIndex && j>pivotIndex){
//         swap(arr[i++],arr[j--]);
//        }

//     }
//     return pivotIndex;

// }
// void quickSort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p = partition(arr,s,e);
//     quickSort(arr,s,p-1);
//     quickSort(arr,p+1,e);

// }
// int main(){
//     int arr[] = {1,0,4,2,0};
//     quickSort(arr,0,5);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =0;
//     int ans =0;
//     while (n!=0)
//     {

//         int bit = n&1;
//         ans = bit*(pow(10,i)) + ans;
//         n = n>>1;
//         i++;

//     }
//     cout<<ans;
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans =0;
//     int i=0;
//     while (n!=0)
//     {
//         int digit = n%10;
//         if(digit==1){
//             ans = digit*(pow(2,i)) + ans;

//         }
//         n/=10;
//         i++;
//     }
//     cout<<ans;

// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     vector<int> v1;
//     for(int i=0;i<6;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     for(int i=0;i<v.size()-1;i++){
//         cout<<"inseide"<<endl;
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]==v[j]){
//                 v[i]= -1;
//             }
//         }
//     }
//     for(int i=0;i<v.size();i++){

//         if(v[i]>0){
//             v1.push_back(v[i]);
//         }
//     }
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> breakingRecords(vector<int> scores) {

//     vector<int> v1;
//     vector<int> ans;

//     for(int i=0;i<scores.size()-1;i++){

//         for(int j=i+1;j<scores.size();j++){
//             if(scores[i]==scores[j]){
//                 scores[j]= -1;
//             }
//         }
//     }
//     for(int i=0;i<scores.size();i++){

//         if(scores[i]>=0){
//             v1.push_back(scores[i]);
//         }
//     }
//      int check = v1[0];
//      int check2 = v1[0];
//     int first1 =0;
//     int second1 =0;
//      for(int i=1;i<v1.size();i++){
//         if(check2>v1[i]){
//             check2 = v1[i];
//             second1++;
//         }
//     }
//     for(int i=1;i<v1.size();i++){

//         if(check<v1[i]){
//             check = v1[i];
//             first1++;
//         }

//     }

//     ans.push_back(first1);
//     ans.push_back(second1);
//     return  ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> solve;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         solve.push_back(ele);
//     }
//     vector<int> ans = breakingRecords(solve);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// class bst{
//     public:
//     int data;
//     bst* right;
//     bst* left;

//     bst(int data){
//         this->data = data;
//         this->right = right;
//         this->left = left;
//     }
// };
// bst* insert(bst* &root,int data){
//     if(root ==NULL){
//         root = new bst(data);
//     }
//     if(data>root->data){
//         root->right = insert(root->right,data);
//     }
//     else{
//         root->left = insert(root->left,data);
//     }
// }
// void insertdata(bst* &root,int data){
//     int data;
//     cin>>data;
//     while (data!=-1)
//     {
//         insert(root,data);
//         cin>>data;
//     }

// }
// bst* minVal(bst* root){
//     while (root!=NULL)
//     {
//         root = root->left;
//         return root;
//     }

// }
// int main(){

// }
// #include <iostream>
// using namespace std;
// class bst{
//     public:
//     bst* right;
//     bst* left;
//     int data;
//     bst(int data){
//         this->data = data;
//         this->right = right;
//         this->left = left;
//     }
// };
// bst* insert(bst* &root,int data){
//     if(root ==NULL){
//         root = new bst(data);
//         return root;
//     }
//     if(data>root->data)
//     {
//         root->right = insert(root->right,data);
//     }
//     else{
//         root->left = insert(root->left,data);
//     }
// }
// bst* insertData(bst* &root,int data)
// {
//     int data;
//     cin>>data;
//     while (data!=-1)
//     {
//         insert(root,data);
//         cin>>data;
//     }

// }
// bst* minVal(bst* root){
//     while (root!=NULL)
//     {
//         root = root->left;
//         return root;
//     }

// }
// bst* deletion(bst* &root,int val){
//         if(root->data >val){
//             root->left = deletion(root->left,val);
//         }
//         if(root->data<val){
//             root->right = deletion(root->right,val);
//         }

//         if(root->left ==NULL && root->right ==NULL){
//             delete root;
//             return NULL;
//         }

//         else if (root->left !=NULL && root->right == NULL)
//         {
//             bst* temp = root->right
//         }

// }
// int main(){

// }
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int data)
    {
        this->data = data;
        this->right = right;
        this->left = left;
    }
};
Node *insert(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
}