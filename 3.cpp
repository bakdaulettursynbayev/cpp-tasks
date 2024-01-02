// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// int main() {
//     queue<string> q;
//     int n;
//     cin >> n;
//     vector<string>v;
//     for(int i = 0; i < n; i++){
//         int s;
//         cin >> s;

//         if(n == 1){
//             string t;
//             cin >> t;
//             q.push(t);
//             v.push_back(t);
//         }
//         else if(s == 2){
//             q.pop();
//             if(!q.empty()){
//                 v.push_back(q.front());
//                 q.pop();
//             }
//             else{
//                 v.push_back("queue is empty");
//             }
//         }
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> v;
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         int s;
//         cin >> s;
//         v.push_back(s);
//         if (s == m) {
//             sum++;
//         }
//     }

//     cout << sum;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     vector<long long> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     long long cnt=0;
//     sort(v.begin(), v.end());
//     for(int i = 0 ; i < v.size(); i++){
//         if(v[i] == v[i+1]){
//             cnt++;
//             if(v[i+1] == v[i+2]){
//                 cnt--;
//             }
//             else continue;
//         }
//     }
//     cout<<cnt;
// }
// #include <iostream>
// #include <queue>

// using namespace std;

// int main(){
//     // int n;
//     // cin>>n;
//     string s;
//     cin>>s;
//     queue<int>q;
//     for(int i=0; i<s.size(); i++){
//         while(s[i]=='1' && s[i]==s[i+1]){
//             s.erase(i,2);
//         }
//     }
//     for(int j=0;j<s.size();j++){
//         q.push(s[j]-48);
//     }
//    while(!q.empty()){

//     cout<<q.front();
//     q.pop();
//    }
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n,m=2;
//     cin>>n>>m;
//     vector<int, int>v;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             int x;
//             cin>>x;
//             v.push_back(x);
//             int a,b;
//             cin>>a>>b;
//             if(a==n[i] && b==m[j]){
//                 int diff=a-b;
//                 v.max(diff);
//             }
//         }
//     }
//     cout<<diff;
//     return 0;
// }
/*#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string,>ss;
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
        string x;
        cin>>x;
        ss.insert(x);
    }
    for(auto i = ss.begin() ; i!=ss.end(); i++){
         cout<<*i<<" "<<endl;
    }
}*/
// #include <iostream>
// #include <stack>
// #include <vector>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     stack<char> st;

//     for (int i = 0; i < s.size(); i++) {
//         if (st.empty()) {
//             st.push(s[i]);
//         } else if (st.top() == '1' && s[i] == '6') {
//             st.pop();
//         } else if (st.top() == '2' && s[i] == '5') {
//             st.pop();
//         } else if (st.top() == '3' && s[i] == '6') {
//             st.pop();
//         } else if (st.top() == '4' && s[i] == '9') {
//             st.pop();
//         } else if (st.top() == '6' && s[i] == '4') {
//             st.pop();
//         } else if (st.top() == '8' && s[i] == '1') {
//             st.pop();
//         } else {
//             st.push(s[i]);
//         }
//     }

//     if (st.empty()) {
//         cout << "Stack is empty";
//     } else {
//         while (!st.empty()) {
//         cout << st.top();
//         st.pop();
//     }
//     }

//     return 0;
// }
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vv;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        vv.push_back(a);
    }
    sort(vv.begin(), vv.end());
    for(int i=0; i<vv.size(); i++){
        cout<<vv[i]<<" ";
    }
}
#include <iostream>
#include <set>

using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto it= s.begin() ;it!= s.end(); it++){
        cout<<*it<<" ";
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vv;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        vv.push_back(a);
    }
    sort(vv.begin(), vv.end());
    reverse(vv.begin(), vv.end());

    for(int i=0; i<vv.size(); i++){
        cout<<vv[i]<<" ";
    }
}
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string a=s+t;
    cout<<a;
}
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    cout<<s+t;
}
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max1=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]> max1){
            max1=arr[i];
        }
    }
    cout<<max1;
}
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>0){
            sum+=arr[i];
        }
    }
    cout<<sum;
}
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>ss;
    int n;
    cin>>n;
    for(int i=0; i<n ; i++){
        int x;
        cin>>x;
        ss.insert(x);
    }
    for(auto it=ss.begin(); it!=ss.end(); it++){
        cout<<*it<<" ";
    }
}
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t;
    cin >> t;

    int sum = 0;

    for (int i = 0; i < t.size(); i++) {
        bool found = false;
        for (int j = 0; j < s.size(); j++) {
            if (t[i] == s[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            sum++;
        }
    }

    if (sum == t.size()) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
//q4
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    for(int i=0; i<s.size(); i++){
        int index=i;
        int sum=0;
        for(int j=0; j<t.size(); j++){
            if(s[j+i]==t[j]){
                sum++;
            }
        }
        if(t.size()==sum){
            cout<<index<<" ";
        }
        else{
            continue;
        }
    }
}
#include <iostream>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    int a;
    cin >> a;

    for (int i = a; i < 10000; i++) {
        int d1 = i % 10;
        int d2 = i / 10 % 10;
        int d3 = i / 100 % 10;
        int d4 = i / 1000 % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
            cout << i;
            break;
        }
    }

    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int sum = 0;
    int max = INT_MIN;
    string d = "";
    string longest;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            sum++;
            d+=s[i];
        } else {
            if (sum > max) {
                max = sum;
                longest = d;
            }
            sum = 0;
            d = "";
        }
    }


    cout << longest;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b,c;
    cin >> b >> c;
    int cnt = 0;
    int cnt1 =0;
    string x;
    cin >> x;
    for(int i=0; i<n; i++){
        if(x[i] >= 'A' && x[i] <= 'Z'){
            cnt++;
        }
        else{
            cnt1++;
        }
    }
    if(cnt < cnt1){
        cout << cnt * b;
    }
    else{
        cout << cnt1 * c;
    }
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    bool found;
    for (int i = 0; i < n; i++) {
        found = false;
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>vv;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vv.push_back(x);
    }
    sort(vv.begin(), vv.end());
    reverse(vv.begin(), vv.end());
    for (int i = 0; i < n; i++) {
        cout << vv[i] << " ";
    }
}
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int>mp;
    int sum=0;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        int b;
        cin>>b;
        mp[a]+=b;
        if(b>0){
            sum=sum+b;
        }
    }
    cout<<sum<<" ";
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a;
    cin>>a;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]!=a){
            cout<<arr[i]<<" ";
        }
    }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    double sum=0.0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double a=sum/n;
    cout<<a;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    reverse(s.begin(), s.end());
    cout<<s;
}
#include <iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    char m;
    cin>>m;
    int sum=0;
    for(int i=0; i<n.size(); i++){
        if(n[i]==m){
            sum++;
        }
    }
    cout<<sum;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(n>0){
            sum+=arr[i];
        }
    }
    cout<<sum;
}
#include <iostream>
#include <climits>
#include <map>
using namespace std;
int main(){
    map<string, int>mp;
    int n;
    cin>>n;
    int min1=INT_MAX;
    string minkey;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        int b;
        cin>>b;
        mp[a]+=b;
        if(b<min1){
            min1=b;
            minkey=a;
        }
    }
    cout<<min1<<" "<<minkey;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0; i<n; i++){
        if(arr[i]<=m){
            cout<<arr[i]<<" ";
        }
    }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
}
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int sum = 0;
    string d="";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' ||
            s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y') {
            sum++;
            d+=s[i];
        }
        // cout<< d<<" ";
    }
    cout << sum << d << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
}
#include <iostream>
#include <map>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=INT_MIN;
    string a;
    map<string, int>mp;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int t;
        cin>>t;
        if(t>max){
            max=t;
            a=s;
        }
    }
    cout<<a<<" "<<max;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n; i++){
        cin>>arr[i];
        if(arr[i]<0){
            sum+=arr[i];
            // cout<<arr[i]<<" ";
        }
    }
    cout<<sum;
}
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int sum=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            sum++;
        }
    }
    cout<<sum;
}
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if(!st.empty()){
            st.pop();
        }else{
            continue;
        }
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vv;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vv.push_back(x);
    }
    sort(vv.begin(), vv.end());
    reverse(vv.begin(), vv.end());
    for(int i=0; i<vv.size(); i++){
        cout<<vv[i]<<" ";
    }
}
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n%2!=0){
            int index=n%2+1;
            int element=arr[index];
            cout<<arr[index];
    }else{
        cout<<"no number in the middle";
    }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int m;
    cin>>m;
    for(int i=0; i<n; i++){
        if(arr[i]<m){
            cout<<arr[i]<<" ";
        }
    }
}
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int sum=0;
    int m;
    cin>>m;
    string d="";
    string c="";
    for(int i=0; i<m-1; i++){
        if(s[i]!=' '){
            c+=s[i];
        }
    }
    for(int i=m-1; i<s.size(); i++){
        if(s[i]!=' '){
            sum++;
            d+=s[i];
        }
    }


    string n;
    cin>>n;

    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            d==n;
        }
    }
    cout<<"sum:"<<m<<endl;
    cout<<"dlyna"<<" "<<sum<<endl;
    cout<<c<<" "<<n;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>0){
            int a=arr[i]*arr[i];
            sum+=a;
        }
    }
    cout<<sum;
}
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string d = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        d += s[i];
    }

    if (s == d) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (i % 2 != 0) {
            sum += arr[i];
        }
    }

    cout  << sum << endl;

    return 0;
}
#include <vector>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vv;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vv.push_back(x);
        if(vv[i]%2==0){
            cout<<vv[i]<<" ";
        }
    }
}*/
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int sum=0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]>='0' && s[i]<='9'){
//             sum+=(s[i]-'0');
//         }
//     }
//     cout<<sum;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     reverse(s.begin(), s.end());
//     cout << s << endl;

//     return 0;
// }
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     int sum = 0;
//     int maximum = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         if (arr[i] > 0) {
//             sum += arr[i];
//         }
//         if (arr[i] > maximum) {
//             maximum = arr[i];
//         }
//     }

//     cout << sum << " " << maximum << endl;

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string dishName;
//     cin >> dishName;

//     int sum = 0;

//     for (char ch : dishName) {
//         sum += static_cast<int>(ch);
//     }

//     if (sum > 300) {
//         cout << "It is tasty!" << endl;
//     } else {
//         cout << "Oh, no!" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){

//     }
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr1(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     int m;
//     cin >> m;

//     vector<int> arr2(m);
//     for (int i = 0; i < m; i++) {
//         cin >> arr2[i];
//     }

//     bool boolka = false;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n-1; j++) {
//             for(int k=0; k<n; k++){
//                 if (arr2[i] == arr1[j] + arr1[k]) {
//                     boolka = true;
//                     cout << "YES" << endl;
//                 }
//             }
//         }
//         if (!boolka) {
//             cout << "NO" << endl;
//         }
//         boolka = false;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n][n];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             arr[i][j] = n;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     vector<int>vv;
//     for(int i=0;i <s.size(); i++){
//         string x;
//         cin>>x;
//         vv.push_back(x);
//     }
//     sort(vv.begin)
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());
//     string ss=s;
//     reverse(ss.begin(), ss.end());
//     cout << s <<" "<< ss << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i+j==n-1){
//                 cout<<i+1;
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     double a;
//     a.sqrt(n*n+m*m);
//     cout<<a;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin<<n;
//     int a,b;
//     a=n+1;
//     b=n-1;
//     cout<<"The next number for the number"<<n<<"is"<<a<<endl;
//     cout<<"The previous number for the number"<<n<<"is"<<b<<endl;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int f;
//     f=m/n;
//     cout<<f;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int f;
//     f=m%n;
//     cout<<f;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m,a=109;
//     cin>>m>>a;
//     int b;
//     if (n>=0){
//         b=(n*m)-a;
//         cout<<b;
//     }else{
//         b=a-(-1*(n*m));
//         cout<<b;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     m=n%10;
//     cout<<m;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     m=n/10;
//     cout<<m;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     int sum=0;
//     while(n!=0){
//         m=n%10;
//         sum+=m;
//         n/=10;
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     if(n%2!=0){
//         m=n+1;
//         cout<<m;
//     }else{
//         m=n+2;
//         cout<<m;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a,b,j;
//     a=n/60;
//     b=n%60;
//     if(a<=23){
//         j=a;
//     }else{
//         a=0;
//         j=a;
//     }
//     cout<<j<<" "<<b;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a = 9;
//     int b = 0;

//     for (int i = 0; i <= n; i++) {
//         if (i <= 0) {
//             b = b + 45;
//             if (i % 2 == 0) {
//                 b = b + 15;
//                 if (b >= 60) {
//                     a = a + 1;
//                     b = b - 60;
//                 }
//             } else {
//                 b = b + 5;
//                 if (b >= 60) {
//                     a = a + 1;
//                     b = b - 60;
//                 }
//             }
//         }
//     }

//     cout << a << " " << b << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int l;
//     cin>>l;
//     int a,b;
//     a=n*l;
//     b=m*l;
//     int sum;
//     if(b>=100){
//         sum=b/100;
//         a=a+sum;
//         b%=100;
//     }
//     cout<<a<<" "<<b;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int c;
//     cin>>c;
//     int d;
//     cin>>d;
//     int e;
//     cin>>e;
//     int f;
//     cin>>f;
//     int n;
//     int m;
//     n=(a*3600)+(b*60)+c;
//     m=(d*3600)+(e*60)+f;
//     if(m-n>=0){
//         cout<<m-n;
//     }else if(n-m>=0){
//         cout<<n-m;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     if (m % n == 0) {
//         cout << m / n;
//     } else {
//         cout << (m / n) + 1;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int a;
//     if (m % n != 0) {
//         a = n - (m % n);
//         cout << a;
//     } else {
//         cout << m % n;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int result;
//     if(n%m==0 || m%n==0){
//         result=1;
//     }else{
//         result=num;
//     }
//     cout<<result;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     if(s>="a" && s<="z"){
//         cout<<"no";
//     }else{
//         cout<<"yes";
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     char a;
//     cin >> a;

//     if (a >= 'a' && a <= 'z') {
//         char b = a - 32;
//         cout << b << endl;
//     } else {
//         cout << a << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     char a;
//     cin >> a;

//     if (a >= 'a' && a <= 'z') {
//         char b = a - 32;
//         cout << b << endl;
//     } else {
//         char b = a + 32;
//         cout << b << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s1;
//     cin>>s1;
//     string s2;
//     cin>>s2;
//     if(s1==s2){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int sum=1;
//     for(int i=1; i<=s.size(); i++){
//         if(s[i]==' '){
//             sum++;
//         }
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int sum=0;
//     int a=0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]!=' '){
//             sum++;
//         }else{
//             if(sum>a){
//                 a=sum;
//             }
//             sum=0;
//         }
//     }
//     if(sum>a){
//         a=sum;
//     }
//     cout<<a;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int len=s.size();
//     int sum=0;
//     for(int i=0; i<len/2; i++){
//         if(s[i]==s[len-i-1]){
//             sum++;
//         }
//     }
//     if(sum==len/2){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
// }
/*#include <iostream>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int sum=0;
    for(int i=1; i<s2.size(); i++){
        for(int j=1; j<s1.size(); j++){
            if(s2[i+j]==s1[j]){
                sum++;
            }else{
                sum=0;
        }
        }
    }
    if(sum==s1.size()){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}*/
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n;
//     cin>>n;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             s[i]=s[i]-n;
//         }
//     }
//     cout<<s;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int n, m, a, b;
//     cin >> n >> m;
//     a = n - 1;
//     b = m - 1;

//     if (a >= 0 && a < s.size() && b >= 0 && b < s.size()) {
//         char s1 = s[a];
//         s[a] = s[b];
//         s[b] = s1;
//     }

//     cout << s;

//     return 0;
// }
/*#include <iostream>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        string s1 = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s1 += s[i];
            } else if (s[i] == ' ') {
                s1 += ' ';
            }
        }

        cout << s1 << " " << endl;
    }

    return 0;
}*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         sum+=arr[i];

//     }
//     double average = static_cast<double>(sum) / n;
//     cout<<sum<<endl;
//     cout<<average;
// }
/*#include <iostream>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int arr[n];
    int a;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i==m){
            m==l;
            m==a;
        }
        if(i==l){
            l==a;
        }
        cout<<arr[i];
    }
}*/
// #include <iostream>
// using namespace std;
// int main(){
//     count int max_value=100;
//     cin>>max_value;
//     int arr[max_value];
//     int sum1=0;
//     int sum2=0;
//     int sum3=0;
//     int sum4=0;
//     int sum5=0;
//     int sum6=0;
//     int sum7=0;
//     int sum8=0;
//     int sum9=0;
//     while(max_value!=0){
//         cin>>arr[i];
//         if(arr[i]==1){
//             sum1++;
//         }else if(arr[i]==2){
//             sum2++;
//         }else if(arr[i]==3){
//             sum3++;
//         }else if(arr[i]==4){
//             sum4++;
//         }else if(arr[i]==5){
//             sum5++;
//         }else if(arr[i]==6){
//             sum6++;
//         }else if(arr[i]==7){
//             sum7++;
//         }else if(arr[i]==8){
//             sum8++;
//         }else if(arr[i]==9){
//             sum9++;
//         }
//     }
//     cout<<sum1<<sum2<<sum3<<sum4<<sum5<<sum6<<sum7<<sum8<<sum9;
// }
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=100; i<1000; i++){
        sum+=i;
        if(sum==n){
            cout<<i;
        }
    }
}*/
// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     set<int>ss;
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         ss.insert(x);
//     }
//     for(auto it; it=ss.begin(); it!=ss.end(); it++){
//         cout<<*it<<" ";
//     //     for (set<int>::iterator it = ss.begin(); it != ss.end(); ++it) {
//     //     cout << *it << " ";
//     // }
//     }
// }
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i<<" ";
        }
    }
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int a=sqrt(arr[i][j]);
            if(a*a==arr[i][j]){
                cout<<a<<" ";
            }else{
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    int m;
    cin>>m;
    int sum=0;
    int cnt=0;
    while (n!=0){
        a=n%10;
        n/=10;
        cnt+=a;
    }
    while (m!=0){
        b=m%10;
        m/=10;
        sum+=b;
    }
    cout<<sum+cnt<<endl;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a,b;
    a=m%10;
    b=m/100;
    int sum=a+b;
    cout<< n+sum<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' &&
            s[i] != 'Y' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' &&
            s[i] != 'u' && s[i] != 'y') {
            cout << s[i];
        }
    }

    return 0;
}*/
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int max=INT_MIN;
//     int a,b;
//     int arr[n][n];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//                 a=i;
//                 b=j;
//             }
//         }
//     }
//     cout<<a<<" "<<b;
// }
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n][n];
//     int max = INT_MIN;
//     int max2 = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//             if (arr[i][j] > max) {
//                 max = arr[i][j];
//                 if(max2>max){
//                     max2=max;
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (arr[i][j] == max) {
//                 max = 0;
//                 break;
//             }
//         }
//         if (max == 0) {
//             break;
//         }
//     }

//     cout << max << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     int sum=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//             if(i+j==n-1){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     int sum=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//             if(arr[i][j]<0){
//                 sum++;
//             }
//         }
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int cnt=0;
//     int sum=0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             cnt++;
//         }
//         if(s[i]>='a' && s[i]<='z'){
//             sum++;
//         }
//     }
//     cout<<sum<<" "<<cnt;
// }
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     double a;
//     a=sqrt(n*n+m*m);
//     cout << fixed << setprecision(3) << a << endl;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int sum=0;
//     for(int i=0; i<n; i++){
//         if(s[i]%2==0){
//             sum++;
//         }
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     //int a;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int m;
//     cin>>m;
//     bool found=false;
//     for(int i=0; i<n; i++){
//         if(arr[i]==m){
//             found = true;
//             break;
//         }
//     }
//     if (found){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int sum=0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]==s[s.size()-1-i]){
//             sum++;
//         }
//     }
//     if(sum==s.size()){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;
//     int sum = 0;

//     for (int i = 0; i < s1.size(); i++) {
//         for (int j = 0; j < s2.size(); j++) {
//             if (s1[i] == s2[j]) {
//                 sum++;
//                 break;
//             }
//         }
//     }

//     if (sum == s2.size()) {
//         cout << "Yes";
//     } else {
//         cout << "No";
//     }

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>vv(n);
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         vv[i]=x;
//     }
//     reverse(vv.begin() ,vv.end());
//     for(int i=0; i<n; i++){
//         cout<<vv[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int sum=n+m;
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     int sum=0;
//     while(n!=0){
//         a=n%10;
//         n/=10;
//         sum+=a;
//     }
//     cout<<sum;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i <= n; i++) {
//         int result = pow(i, i);
//         cout << result << " ";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     if(s=="MON"){
//         cout<<"6";
//     }else if(s=="TUE"){
//         cout<<"5";
//     }else if(s=="WED"){
//         cout<<"4";
//     }else if(s=="THU"){
//         cout<<"3";
//     }else if(s=="FRI"){
//         cout<<"2";
//     }else if(s=="SAT"){
//         cout<<"1";
//     }else if(s=="SUN"){
//         cout<<"7";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     double b;
//     int sum=0;
//     while(n!=0){
//         a=n%10;
//         n/=10;
//         b=a/2;
//         sum+=b;
//     }
//     cout<<sum;
// }
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int max=INT_MIN;
//     int a;
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//         if(arr[i]>max){
//             max=arr[i];
//             a=i;
//         }
//     }
//     cout<<a;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>vv(n);
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         vv[i]=x;
//     }
//     reverse(vv.begin(), vv.end());
//     for(int x: vv){
//         cout<<x<<" ";
//     }
// }
