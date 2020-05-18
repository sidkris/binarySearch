//binary search (aka : divide and conquer)

#include <iostream>

int main(){

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(int);
    int startIdx = 0;
    int endIdx = n - 1;

    int key;
    std::cout << "what integer value are you searching for? : ";
    std::cin >> key;


    while(startIdx <= endIdx){

        int mid = (startIdx + endIdx)/2;

        if(a[mid] == key){
            std::cout << "the number " << key << " was found at index " << mid << ".\n";
            break;
        }
        else if(a[mid] > key){
            endIdx = mid-1;
        }
        else{
            startIdx = mid+1;
        }
    }

    return 0;
}
