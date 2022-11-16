/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(n == 1){
            if(guess(n) == 0)
                return n;
            else return 0;
        }
        int mid = n/2;
        int low = 1;
        int high = n;
        while(low<high){
            if(0==guess(mid))
                return mid;
            else if(1==guess(mid)){
                low = mid + 1;
                mid = low + (high-low)/2;
            }else{
                high = mid - 1;
                mid = low + (high-low)/2;
            }
        }
        return mid;
    }
};