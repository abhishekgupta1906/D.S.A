#include <vector>
#include<climits>
using namespace std;
class PriorityQueue {
     vector<int> pq;

    // Declare the data members here

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        pq.push_back(element);
        int ci=pq.size()-1;
        while(ci>0)
        {
            int pi=(ci-1)/2;
            if(pq[ci]>pq[pi])
            {
                int temp=pq[ci];
                pq[ci]=pq[pi];
                pq[pi]=temp;
            }
            else
            {
                break;
            }
            ci=pi;
         

        }
        // Implement the insert() function here
    }

    int getMax() {
        if (isEmpty())
        {
            return INT_MIN;
        }

        return pq[0];
        // Implement the getMax() function here
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty())
        {
            return INT_MIN;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int pi=0;
        int lci=2*pi+1;
        int rci=2*pi+2;
        while(lci<pq.size())
        {
            int maxindex=pi;
            // for comaparing parent ,right and left child
            if(pq[rci]>pq[maxindex] && rci<pq.size())
            {
                maxindex=rci;
            }
            if(pq[lci]>pq[maxindex])
            {
                maxindex=lci;
            }
            if(maxindex==pi)
            {
                break;
            }
            int temp=pq[maxindex];
            pq[maxindex]=pq[pi];
            pq[pi]=temp;

            pi=maxindex;
            lci=2*pi+1;
            rci=2*pi+2;

        }
        return ans;

    }

    int getSize() { 
        return pq.size();
        // Implement the getSize() function here
    }

    bool isEmpty() {
        return pq.size() == 0;
        // Implement the isEmpty() function here
    }
};