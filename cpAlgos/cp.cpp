// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "this";
//     reverse(s.begin(),s.end());
//     stack<char> st;
//     for(char x:s){
//         st.push(x);
//     }
//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
    
//     cout<<s;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string str;
// 	    cin>>str;
// 	    //1 1 0 --> 1 0 0 
// 	    // 1 0 1 0 0 1 --> 1 0 1 1 0 0 --> 1 1 0 0 0 0 --> 1 0 0 0 0 0
// 	    // 0 0 0 1 ---> 1 0 0 0 
// 	    // 0 0 0 1 0 1  --> 0 0 0 1 0 0  --> 0 0 0 1 0 0 
// 	    int index = -1;
// 	    for(int i = 0; i<n; i++){
// 	        if(str[i]=='1')
// 	        {
// 	            index = i;
// 	            break;
// 	        }
// 	    }
	    
// 	    if(index==-1 || (n-index)<3)
// 	    cout<<str<<endl;
// 	    else
// 	    {   
// 	        for(int i = 0; i<n; i++){
// 	            if(i<=index)
// 	            cout<<str[i];
// 	            else
// 	            cout<<"0";
// 	        }
// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }
