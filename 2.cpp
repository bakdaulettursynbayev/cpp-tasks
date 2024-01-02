// /*#include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     set<int>a;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a.insert(x);
//     }

//     for(auto i = a.begin() ; i!=a.end(); i++){
//         cout<<*i<<" ";
//     }
// }
// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     set<int>a;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a.insert(x);
//     }
//     int sum=0;
//     for(auto i = a.begin() ; i!=a.end(); i++){
//         sum=*i+sum;
//     }
//     cout<<sum;
// }
// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     set<int>a;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a.insert(x);
//     }
    
//     for(auto i = a.begin() ; i!=a.end(); i++){
//         if(*i%2!=0){
//             cout<<*i<<" ";
//         }
//     }
//     //cout<<sum<<" ";
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;

//     vector<int> a;

    
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a.push_back(x);
//     }

//    int m;
//    cin >> m;
//    vector<int> b;
//     for (int i = 0; i < m; i++) {
//         int x;
//         cin >> x;
//         b.push_back(x);
//     }

//     for(int i=0; i<n; i++){
//         for (int j = 0; j < m; j++) {
//             if (a[i] == b[j]) {
//                 cout << a[i] << " ";
//             }
//         }
//     }
//     return 0;
// }
// #include <iostream>
// #include <set>
// #include <string>

// using namespace std;

// int main() {
//     set<char> a;

//     string n;
//     cin >> n;
//     for (char c : n) {
//         a.insert(c);
//     }
//     cout << a.size() << endl;
//     for (auto i = a.begin(); i != a.end(); i++) {
//         cout << *i << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     set<int>a;
//     int n,m;
//     cin>>n>>m;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a.insert(x);
//     }

//     for(auto i = a.begin() ; i!=a.end(); i++){
//         if(*i!=m){
//             cout<<*i<<" ";
//         }
//     }
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0; i<n ;i++){
//         cin>>a[i];
//     }

//     int b;
//     cin>>b;

//     auto it = find(a.begin(), a.end(),b);
    
//     if (it !=a.end()){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
//     return 0;
// }
// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     set<int>a;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a.insert(x);
//     }

//     int diff=*a.rbegin()-*a.begin();
//     cout<<diff;
// }*/
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     map<int,int> mySandar;
//     for(int i=0; i<=a; i++){
//     mySandar.insert(pair<int , int> (i,i));
//     }
//     for(auto& pair : mySandar)
//     cout<<pair.first<<pair.second<< endl;
// }
/*#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr(a);
    for(int i=0; i<=a; i++){
        if(a%2==0){
            cout<<i<<" ";
        }else{
            break;
        }
    }
    for(int i=0; i<=a; i++){
        if(a%2!=0){
            cout<<i;
        }
    }
}
#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, int> myMap;

    for(int i=0; i<n; i++){
     string show;
     int rating;
     cin>>show>>rating;
     myMap[show]+=rating;
    }
    for(const auto& entry : myMap){
        cout<<entry.first<<" "<<entry.second<<endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (i == j) {
                sum1 += arr[i][j];
            }
            if (i + j == n - 1) {
                sum2 += arr[i][j];
            }
        }
    }

    int diff = sum1 - sum2;
    cout << diff << endl;

    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int maxsan1 = INT_MIN;
    int maxsan2 = INT_MIN;
    int arr[n][m];

    int k = 2;
    for (int iter = 1; iter < k; iter++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                if (arr[i][j] > maxsan1) {
                    maxsan2 = maxsan1;
                    maxsan1 = arr[i][j];
                } else if (arr[i][j] > maxsan2 && arr[i][j] < maxsan1) {
                    maxsan2 = arr[i][j];
                }
            }
        }
        cout << maxsan1 <<" "<< maxsan2 << endl;
    }

    //cout << maxsan << endl;

    return 0;
}*/
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0; i<a; i++){
//         cin>>arr[i];
//         if(a%2==0){
//             cout<<arr[i];
//         }else{
//             break;
//         }
//     }

//     for(int i=0; i<a; i++){
//         if(a%2!=0){
//             cout<<a;
//         }
//     }
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int main(){
//     vector<pair<int,int> > vv;
    
//     long long n;
//     cin >> n;
    
//     for(int i = 0; i < n; i++){
//         long long a,b;
//         cin >> a >> b;
//         vv.push_back(make_pair(a,b));
//     }
//     sort(vv.begin(), vv.end());
//     // int a = 5;
//     // cout << &a;
//     vector<pair<int,int> >:: iterator it;
//     for(it = vv.begin(); it!=vv.end(); it++){
//         cout << it ->first << " " << it -> second <<endl;
//     }
    
// }
// #include <iostream>
// #include <map>

// using namespace std;

// int main() {
//     map<string, int> mp;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int a;
//         cin >> a;
//         mp[a]++;
//     }

//     map<string , int >::iterator it;
//     int cnt = 0;
//     for (it = mp.begin(); it != mp.end(); it++) {
//         if (it->second == 3) {
//             cnt++;
//         }
//     }

//     cout << cnt;

//     return 0;
// }
/*#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> mp; 
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (mp[s] == 0) {
            mp[s] = i+1;
        }
    }

    map<string>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}*/
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     map<string, int>mp;
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         string s;
//         cin>>s;
//         if(mp.find(s) == mp.end()){
//             mp[s]=i;
//             cout<<"new user added"<<endl;
//         }else{
//             cout<<"user already exists"<<endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     map<string>mp;
//     int n;
//     cin>>n
//     for(int i=0; i<n; i++){
//         string s,t;
//         cin>>s>>t;
//         auto it= mp.find(s);
//         if(it ==mp.end()){
//             cout<<"login error"<<endl;
//         }else if(it->second!=t){
//             cout<<"password error"<<endl;
//         }else{
//             cout<<"correct password"<<endl;
//         }
//     }
//     return 0;
// }
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>a;

    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        a.pushback(m);
        if(a.find()==a.end()){
            cout<<"1";
        }else {
            cout<<"0";
        }
    }
    return 0;
} 
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        a.push_back(m);

        if (seen.find(m) == seen.end()) {
            seen.insert(m);
            cout << "1 ";
        } else {
            cout << (seen.count(m) == 1 ? "1 " : "0 ");
        }
    }

    return 0;
}*/
// #include <iostream>
// #include <queue>

// using namespace std;

// int main() {
//     queue<string> q;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int s;
//         cin >> s;

//         if (s == 1) {
            
//             string name;
//             cin >> name;
//             q.push(name);
//         } else if (s == 2) {
            
//             if (!q.empty()) {
//                 cout << q.front() << endl;
//                 q.pop();
//             } else {
//                 cout << "queue is empty" << endl;
//             }
//         }
//     }

//     return 0;
// }
// #include <iostream>
// #include <stack>

// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     stack<char>st;
//     // (()())
//     for(int i = 0; i < s.size(); i++){
//         if(st.empty()){
//             st.push(s[i]);
//             // (
//         }
//         else if(st.top() == '(' && s[i] == ')'){
//             st.pop();
//         }
//         else{
//             st.push(s[i]);
//             // ( (
//         }
//     }

//     if(st.size() == 0){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
// }
