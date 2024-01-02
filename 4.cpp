// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%2!=0){
//         cout<<"Odd";
//     }else if(n==0){
//         cout<<"None";
//     }else{
//         cout<<"Even";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     if(n>=0){
//         a=pow(2,n);
//     }
//     cout<<a;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int b;
//     int a=n%10;
//     int sum=0;
//     while(n!=0){
//         b=n%10;
//         n/=10;
//         sum+=b;
//     }
//     if(sum%a==0){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         if(arr[i]%2!=0){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int max=INT_MIN;
//     int arr[n][n];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//         }
//     }
//     cout<<max;
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
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     double a;
//     a=sqrt(n);
//     cout<<fixed<<setprecision(10)<<a;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int a;
//     a=n+m;
//     cout<<a;
// }
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int max=INT_MIN;
//     int min=INT_MAX;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<max-min;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     for(int i=0; i<n; i++){
//         if(a<n){
//             a=pow(2,i);
//             cout<<a<<" ";
//         }
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int sum=0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]>='a' && s[i]<='z'){
//             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='y' || s[i]=='u' || s[i]=='o'){
//                 sum++;
//             }
//         }
//     }
//     cout<<sum;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     a=sqrt(n);
//     if(a*a=n){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int a, b;
//     cin >> a >> b;

//     if (a >= 0 && a < n && b >= 0 && b < n) {
//         int temp = arr[a];
//         arr[a] = arr[b];
//         arr[b] = temp;
//         for (int i = 0; i < n; i++) {
//             cout << arr[i] << " ";
//         }
//     } else {
//         cout << "Invalid indices";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cin>>a>>b;

//     int result = a & b;

//     cout << result << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%4==0){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    }
}*/
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
//     sort(vv.begin(), vv.end());

//     for (int i = 1; i <= n; i++) {
//         if(i%2==0){
//             cout<<vv[i]<<" ";
//         }
//     }
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int a;
//     cin >> a;

//     if (a >= 0 && a < n) {
//         arr.erase(arr.begin() + a);
        
//         for (int i = 0; i < arr.size(); i++) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int max = INT_MIN;
//     int arr[n][n];
//     int a, b;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cin >> arr[i][j];
//             if (i == j) {
//                 if (arr[i][j] > max) {
//                     max = arr[i][j];
//                     a = i;
//                     b = j;
//                 }
//             }
//         }
//     }

//     cout << "Maximum element is: " << max << " with coordinates: " << a << ";" << b;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int n=a^b;
//     cout<<n;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int cnt=0;
//     int sum=0;
//     for(int i=0; i<s.size(); i++){
//         if(i%2==0){
//             sum+=s[i];
//         }else{
//             cnt+=s[i];
//         }
//     }
//     if(sum==cnt){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }
// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     set<int>unq;
//     for(int i=0; i<n; i++){
//         unq.insert(arr[i]);
//         //sum+=arr[i];
//     }
//     for(int elm: unq){
//         sum+=elm;
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     if(s1==s2){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     int max=INT_MIN;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         sum+=arr[i];
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<sum<<" "<<max;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<"[*]";
//         }
//         cout<<endl;
//     }

// }
// #include <iostream>
// using namespace std;

// int main() {
//     string s1;
//     int a, b;

//     cin >> s1 >> a >> b;
//     if (a >= 0 && a < s1.size() && b >= 0 && b < s1.size() && a <= b) {
//         cout << s1.substr(a, b - a + 1) << endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a=n|m;
//     cout<<a;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]>='a' && s[i]<='z'){
//             s[i]=s[i]-32;
//         }
//         cout<<s[i];
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n];
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//         if(i==m){
//             cout<<arr[i];
//         }
//     }
// }
// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     set<int>ss;
//     for(int i=0; i<n; i++){
//         int x;
//         sin>>x;
//         ss.insert(x);
//     }
//     for(auto it=ss.begin(); it!=ss.end(); ++it){
//         cout<<*it<<" ";
//     }
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
//     sort(vv.begin(), vv.end());
//     for(int i=0; i<vv.size(); i++){
//         cout<<vv[i]<<" ";
//     }
// }

/*#include <iostream>
#include <set>
#include <climits>

using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> ss;

    for (int i = 0; i < s.size(); i++) {
        char x = s[i];
        ss.insert(x);
    }

    char maxChar = CHAR_MIN; 

    for (auto it = ss.begin(); it != ss.end(); ++it) {
        if (*it > maxChar) {
            maxChar = *it;
        }
    }

    cout << maxChar << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum ^= arr[i];
    }

    for (int i = 0; i < 100; i++) {
        int a = pow(2, i);
        if (sum == a) {
            cout << "YES";
            return 0;
        } else if (sum < a) {
            cout << "NO";
            return 0;
        }
    }

    return 0;
}*/


