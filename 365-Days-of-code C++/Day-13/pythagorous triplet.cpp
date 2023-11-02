bool checkTriplet(int arr[], int n) {
	    // code here
	    for(int i=0 ;i<n;i++){
	        arr[i] = arr[i]*arr[i];
	    }
	    sort(arr,arr+n);
	    
	    for(int i=n-1;i>=0;i--){
	        int l=0, r = i;
	        while(l<=r){
	            if(arr[l]+arr[r] == arr[i]){
	                return true;
	            }
	            else if(arr[l]+arr[r] > arr[i]){
	                r--;
	            }
	            else {
	                l++;
	            }
	        }
	    }
	    return false
