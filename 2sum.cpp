//sum of 2 no.'s equal to search element using 2 pointer approach
//assume the array to be sorted in increasing order

//LEETCode - 1

#include<iostream>
#include<vector>

using namespace std;

void sum2(vector <int> v , int n , int s){
    int i=0,j=n-1,c=0;
    while (i<=j){
        if (v[i]+v[j]<s){
            i++;
        }
        else if (v[i]+v[j]>s){
            j--;
        }
        else{
            cout<<v[i]<<" "<<v[j]<<endl;
            c++;
            i++;
            j--;
        }
    }
    if (c==0){
        cout<<"NO SUCH PAIR AVAILABLE";
    }
}

int main(){
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter "<<n<<" elements :- "<<endl;
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int s;
    cout<<"Enter search element  : ";
    cin>>s;
    cout<<"The pairs which equal target sum are : "<<endl;
    sum2(v , n , s);
    return 0;
}