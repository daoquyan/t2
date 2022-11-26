#include <iostream>

using namespace std;

void sort(int arr[], int n) {
    for (int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if (arr[i]>arr[j]) {
				int m=arr[i];
				arr[i]=arr[j];
				arr[j]=m;
			}
		}
	}
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, n);
    int count=0;
    for (int i=0;i<n;i++) {
        if (a[i]!=a[i+1]) {
            count++;
        }
    }
    cout<<count;
}
