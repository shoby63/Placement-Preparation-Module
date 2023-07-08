int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size(); //size of the given array.
    int xr = 0;
    map<int, int> mpp; //declaring the map.
    mpp[xr]++; //setting the value of 0.
    int count = 0;

    for (int i = 0; i < n; i++) {
        // prefix XOR till index i:
        xr = xr ^ a[i];

        //By formula: x = xr^b:
        int x = xr ^ b;

        // add the occurrence of xr^b
        // to the count:
        count += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[xr]++;
    }
    return count;
}
