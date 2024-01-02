/*#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "[*]";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << i * j;
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin>>a;
    int arr[a][a];
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            cin >> arr[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=0; i<a; ++i){
        for(int j=0; j<a; ++j){
            if(max<arr[i][j]){
                max=arr[i][j];
                
            }
            if(max=arr[i][j]){
                b=arr[i];
                c=arr[j];
            }
        }
    }
    cout<<b<<' '<<c<<endl;
    return 0;
}
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int maxVal = INT_MIN;
    int maxRow, maxCol;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int val;
            cin >> val;
            if (val > maxVal) {
                maxVal = val;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << maxRow << " " << maxCol << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a][a];
    int max=INT_MIN;
    int b,c;
    for(int i=1; i<=a; ++i){
        for(int j=1; j<=a; ++j){
            int d;
            cin>>d;
            if(d>max)
            max=d;
            b=i;
            c=j;
        }
    }
    cout<<b<<" "<<c<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    char arr[100][100];

    for(int i=1; i<a; ++i){
        for(int j=1; j<a; ++j){
            if(i==j){
                arr[i][j]='0'+(i+1);
                arr[i][j] = '.';
            }
        }
    }
    for(int i=1; i<a; ++i){
        for(int j=1; j<a; ++j){
            cout<<arr[i][j];
            }
            cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = '0' + (i + 1);
            } else {
                matrix[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = '0' + (n-i);
            } else {
                matrix[i][j] = '.';
            }
        }
    }

    for (int i = n-1; i >=0; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << i + 1;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int b=0;
    int c=0;
    for (char d: a){
        if (isupper (d)){
            b++;
        }else if(islower (d)) {
            c++;
        }
        cout<<b<<c<<endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Transaction {
    string description;
    double amount;
};

int main() {
    vector<Transaction> transactions;
    double balance = 0.0;

    while (true) {
        cout << "1. Ввести новую транзакцию\n";
        cout << "2. Показать баланс\n";
        cout << "3. Выйти\n";
        cout << "Выберите опцию: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    Transaction newTransaction;
                    cout << "Описание транзакции: ";
                    cin.ignore();
                    getline(cin, newTransaction.description);
                    cout << "Сумма: ";
                    cin >> newTransaction.amount;

                    transactions.push_back(newTransaction);
                    balance += newTransaction.amount;

                    cout << "Транзакция добавлена.\n";
                }
                break;
            case 2:
                cout << "Текущий баланс: " << balance << "\n";
                break;
            case 3:
                cout << "Программа завершена.\n";
                return 0;
            default:
                cout << "Неправильный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int b[][3] = {
        {9, -1, 2},
        {0, 4, -3},
        {-7, 5, 6},
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<*(*(b+i)+j)<<" "<<endl;
            //cout << b[i][j] << " ";
        }
        cout << endl;
    }
    reverse (*b, (*(b+1)+3));

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    string a;
    //int b,c;
    cin>>a;//>>b>>c;
    int san=0;
    for(char character : a) { 
        if (isalpha(character)){
            san++;
        }
    }
    cout<<san<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string a;
    cin>>a;

    if (islower(a[0])){
        a[0]=toupper(a[0]);
        cout<<a<<endl;
    }else{
        cout<<a<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    float a,b,d;
    cin>>a>>b;
    d=(b/a)*100;
    cout<<d;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a<0){
        int b=a*(-1);
        cout<<b<<endl;
    }else{
        cout<<a<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int vert[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> vert[i][j];
        }
    }

    int horz[b][a];

    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            horz[j][i] = vert[i][j];
        }
    }

    
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << horz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
void numbers(int r[],int n){
    for (int i=n-1;i>=0;i--){
        cout<<r[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int r[n];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    numbers(r,n);
}
#include <iostream> 
using namespace std; 
void numbers(string s, int n){ 
    int c=0; 
    int l=0; 
    for(int i=0; i<s.length(); i++){ 
        if (c==n){ 
            break;} 
        if(s[i] >= '0' && s[i]<= '9'){ 
            if(c>1){ 
                if(l==i-1){ 
                    c+=1;} else{ 
                        c=0;}} 
            l=i; 
            if(c<=1){ 
            c+=1;}}else{ 
                c=0;} 
    } 
    if(c==n){ 
        cout<<"Valid";}else{ 
            cout<<"Not valid"; 
        } 
} 
int main() { 
    string s; 
    int n; 
    cin>>s>>n; 
    numbers(s, n); 
}
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int sum=0;
    for(int i=0; i<a; i++){
        int b=a%10;
        a/=10;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i=i+2) {
        if (islower(a[i])) {
            a[i] = toupper(a[i]);
        } else if (isupper(a[i])) {
            a[i] = tolower(a[i]);
        }
    }

    cout << a << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    bool isValid=true;
    while (a != 0) {
        int b = a % 10;
        a /= 10;
        if(b%2!=0){
            isValid=false;
        }
    }
        if(isValid){
            cout<<"Valid"<<endl;
        }else{
            cout<<"Not valid"<<endl;
        }
    return 0;
    }
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b;
    c = sqrt(a * a + b * b);

    cout << c << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    if (a.empty()) {
        cout << endl;
        return 1;
    }

    char firstletter = a[0];
    char lastletter = a[a.length() - 1];

    if (firstletter == lastletter) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    string s1="abcdef";
    string s2="fedcba";

    if (s1==s2){
        cout<<"yes";

    }else{
        cout<<"no";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;
    
    int c = 0;

    while (a > 0) {
        int b = a % 10;
        if (b > c) { 
            c = b;
        }
        a = a / 10; 
    }

    cout << c;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a;
    float sum = 0;
    while(a > 0){
        b = (a % 10)/2;
        sum += b;
        a = a / 10;
    }
    int c = sum;
    cout << c;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    long long number;

    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        sum += number;
    }

    cout << sum;
    return 0;
}
#include <iostream>
using namespace std;
long long factorial(long long n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    int number;
    cin >> number;

    if (number > 0) {
        int result = factorial(number);
        cout<<result << endl;
    }
    return 0;
}*/
