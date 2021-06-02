// Question link :  https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        //used hare and tortoise algorithm....
     
        int fast = arr[0];
        int slow = arr[0];
        do{
            slow = arr[slow];
            fast = arr[arr[fast]];
            
        }while(slow != fast);
    
        slow = arr[0];
        while(slow != fast){
            slow = arr[slow];
            fast = arr[fast];
        }
        return fast;
        
    }
};


// What is hare and tortoise algorithm :--
//   In this method , intially we need two pointers one will be fast and another will be slow 
//   And then we traverse linkedlist till slow and fast became equal 
//   and to check this, we move slow to next node  and move fast to next->to->next node
//   When slow and fast became equal , That means they make a collision and it is proved that this is a circular linkedlist..
//   Now, here I again assign slow to the first node of linkedlist and now we move slow and fast with same frequency 
//   When element at slow and fast position became equal , we just return fast/slow and that will be our repeating or dublicate element!
