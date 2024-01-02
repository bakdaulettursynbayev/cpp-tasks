/*#include <iostream>
using namespace std;
int main(){
    string a;
    getline (cin, a);
    for(int i=0; i<=a.size(); i++){
        if (a[i] !=' '){
            if(a[i] >='A' && a[i] <='Z'){
                a[i]=a[i]+32;
                count i=0;
                t<<a[i];
            }else if(a[i] >='a' && a[i] <='z'){
                a[i]=a[i]-32;
                cout<<a[i];
            }
        }
        else{
            cout<<" ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;

    int sum=0;
    for(int i=1; i<=a.size()-1; i++){
        sum++;
    }
    if(sum>=10){
        cout<<a[0]<<sum<<a.size()-1;
    }else{
        cout<<a;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<a;
    for(int i=0; i<=a; i++){
        string b;
        cin>>b;
        if(b[0]=='Y' || b[0]=='y' && b[1]=='E' || b[1]=='e' && b[2]=='s' || b[2]=='S'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    string d = "";
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='z'){
            d+=a[i];
        }
    }
    cout << d;
}
#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    string b;
    cin >> b;
    string c = "";

    bool found = false;

    for (int i = 0; i < b.size(); i++) {
        if (found) {
            c += b[i];
        }
        if (b[i] == a) {
            found = true;
        }
    }

    cout << c << endl;

    return 0;
}
#include <iostream> 
#include <algorithm> 
using namespace std; 
int main(){ 
    int a; 
    cin >> a; 
    string c="0123456789ABCDEF",b=""; 
    while(a!=0){ 
        int ostatok=a%16; 
        b+=c[ostatok]; 
        a=a/16; 
    } 
    reverse(b.begin(), b.end()); 
    cout << b; 
}
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    char b;
    int sum=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]>='0' && a[i]<='9'){
            int k = a[i] - 48;
            sum+=k;
        }
    }
    cout<<sum;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    string b;

    for (int i=0; i<a.size(); i++){
        if(a[i]>='a' && a[i]<='z'){
            b+=a[i];
        }
    }
    cout<<b;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int b;
    cin >> b;
    char arr[b];
    for(int i=0; i<b; i++){
        cin >> arr[i];
    }
    sort(arr, arr+b);
    int cnt[b];
    for(int i = 0; i<b; i++){
        for(int j = 0; j<a.size(); j++){
            if(arr[i] == a[i]){
                cnt[i]++;
                // cnt[0] == 1 arr[0] = g;
            }
        }
    }

    for(int i=0; i>b; i++){
        cout<<arr[i]<<"-"<<cnt[i]<<endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string marka[n];
    int price[n];
    int quality[n];

    double prq[n]; 
    for(int i = 0; i < n; i++){
        cin >> marka[i] >> price[i] >> quality[i];
    }

    for(int i = 0; i < n; i++){
        prq[i] = price[i] / quality[i];
    }
    int min = 123232;
    int index;
    for(int i = 0; i < n; i++){
        if(min > prq[i]){
            min = prq[i];
            index = i;
        }
    }

    cout << marka[index];
}
#include <iostream>
using namespace std;

int main(){
    string a;
    string b;
    char c;
    cin>>a>>b>>c;
    string d="";
    for ( int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]>='a' && a[i]<='z'){
                d+=a[i];
                if(a[i]==b[j]){
                    cout<<"c";
                }else{
                    cout<<d;
                }
            }
        }   
    }
    return 0;
}//kate ?*/





/*#include <iostream>
using namespace std;

int main() {
    string s, t;
    char c;
    
    // Ввод первой строки
    getline(cin, s);
    
    // Ввод второй строки
    getline(cin, t);
    
    // Ввод символа для замены
    cin >> c;

    // Заменяем вхождения символов из t в s на c
    for (char& ch : s) {
        if (t.find(ch) != string::npos) {
            ch = c;
        }
    }

    // Вывод измененной строки
    cout << s << endl;

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    int b;
    cin>>b;
    char arr[b];
    for ( int i=0 ; i<b; i++ ){
        cin>>arr[i];
    } 
    sort(arr, arr+b);
    int cnt[b];

    for(int i=0 ; i<b ; i++){
        cnt[i]=0;
    }

    for(int i=0 ; i<b; i++){
        for(int j=0; j<a.size(); j++){
            if(arr[i]==a[j]){
                cnt[i]++;
            }
        }
    }
    for (int i=0; i<b ; i++){
        cout<<arr[i]<<"-"<<cnt[i]<<endl;
    }
}

#include <iostream>

using namespace std;

int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    char c;
    for (int i=0; i<b.size(); i++){
        char s=b[i];
        for(int i=0; i<a.size(); i++){
            if(s=a[i]){
                a[i]=c;
            }
        }

        
    }
}

#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    cout<<"Hello"<<" "<<a;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a >> b;
    char c;
    cin >> c;
    for (int i=0; i<=b.size(); i++){
        char g=b[i];
        for (int j=0; j<=a.size(); j++){
            if(g==a[j]){
                a[j]=c;
            }
        }
    } 
    cout << a<< endl;
}
#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){ 
    int a, c=0; 
    cin >>a; 
    int g=0; 
    while(a!=0){ 
        int b=a%10; 
        int s=pow(2,g); 
        c+= b*(1<<g); 
        g+=1; 
        a/=10; 
 
    } 
    cout << c; 
}
#include <iostream>
using namespace std;

int main(){
    string a;
    getline (cin, a);
    string b="";
    for(int i=0; i<a.size(); i++){
        if((a[i]>'A' && a[i]<'Z') || (a[i]>'a' && a[i]<'z')){
            b+=a[i]+1;
        }
    }
    cout<<b;
}

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string a;
    getline (cin, a);
    int n;
    cin>>n;
    char arr[n];
    int cnt[n]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<a.size(); i++){
        for(int j=0; j<n; j++){
            if(arr[i]==a[i]){
                cnt[j]++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<cnt[i]<<endl;
    }
    
}
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a%2!=0 && b%2==0){
        cout<<"black";
    }else if(a%2!=0 && b%2!=0){
        cout<<"white";
    }else if(a%2==0 && b%2==0){
        cout<<"black";
    }else{
        cout<<"white";
    }
    return 0;
}
#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }

        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    int diff = max_val - min_val;
    cout << diff << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] == i + 1) {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
    for ( int i=4; i<n; i++){
        if(n%2!=0)
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>a;
    int b;
    cin>>b;
    for(int i=0; i<b; i++){
    int x;
    cin>>x;
    a.push_back(x);
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
}*/
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>a;
//     int b;
//     cin>>b;
//     for(int i=0; i<b; i++){
//     int x;
//     cin>>x;
//     a.push_back(x);
//     }
//     //reverse(a.begin(), a.end());
    
//     for(int i=a.size()-1; i<a.size(); i--){
        
//         cout<<a[i]<<" ";
        
//     }
    
//     return 0;
// }
/*#include <iostream>
#include <vector>
using namespace std;

int main(){
    string a;
    cin>>a;

    vector<char>b;



}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    int n ;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k, m;
    cin >> k >> m;
    
    reverse(v.begin() + k,v.begin() +m+1);
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    int n ;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k,m;
    cin >> k>>m;
    
    v.erase(v.begin() + k, v.begin()+ m +1);
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int b;
    cin>>b;
    vector<int>a;
    for(int i = 0; i < b; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int c;
    cin>>c;
    int sum=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]>c){
            sum++;
        }
    }
    cout<<sum;
}

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> b;
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int minvalue = INT_MAX;
    
    int c;
    for (int i : b) {
        minvalue = min(minvalue, i);
        
    }

    for(int i=0; i<c; i++){
        cout<<minvalue;
    }
    
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> b;
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int minvalue = INT_MAX;

    
    for (int i = 0; i < a; i++) {
        minvalue = min(minvalue, b[i]);
    }

    
    for (int i = 0; i < a; i++) {
        if (minvalue == b[i]) {
            cout << minvalue << " ";
        }
    }

    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<char>a;
    string n;
    cin>>n;
    for (int i = 0; i < n.size(); i++) {
        a.insert(tolower(n[i]));
    }
    cout<<a.size()<<endl;
    for(auto i = a.begin() ; i!=a.end(); i++){
        cout<<*i<<" ";
    }
}*/
// #include <iostream>
// #include <vector>
// using namespace std;
// const long long mx = 10e5;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     vector<int, bool>vv;
//     bool in[mx] = {false};
//     for(int i=0; i<n; i++){
//         cin>>a[i]; 
//         for(int j=0; j<i; j++) vv[a[i]+a[j]]=true;
//     }
//     int m;
//     cin>>m;
//     int res=0;
//     for(int i=0; i<m; i++){
//         cin>>res;
//         if(vv[res]) {
//             cout<<"YES\n";
//         }else{
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }