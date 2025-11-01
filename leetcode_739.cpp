//739. Daily Temperatures 

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size(); //days for getting a warmer day
        vector<int>answer(n,0); //initializes all the array values with 0 considering that there is no warmer day in future
        stack<int> st;//this stores indexes of the days 
        for(int i = 0; i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){ //checks that stack is not empty and current days temperature is warmer
                int prevIndex = st.top();//stores the index of previous day which satisfies the while condition
                answer[prevIndex] = i-prevIndex;//this shows the difference of the warmer day and the initail day,means no. of days  
                st.pop();//removes the index from the stacks we checked and found answer
                
            }
            st.push(i);//this pushes the index into stack because while condtion not satisfied means warmer day not found 
        }
        return answer; //gives the final array of the days 
        
    }

};
