class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int k=n-1;
	    int i=0;
	    int j=0;
	    while(i<=k and j<m){
	        if(arr1[i]<arr2[j]){
	            i++;
	        }
	        else{
	            swap(arr2[j++],arr1[k--]);
	        }
	        
	    }
	    sort(arr1,arr1 + n);
	    sort(arr2,arr2 + m);
	}
};
