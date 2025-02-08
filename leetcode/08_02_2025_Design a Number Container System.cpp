class NumberContainers {
    public:
    unordered_map<int,int>indNum;
    unordered_map<int,set<int>> numIndexes;
        NumberContainers() {
            
        }
        
        void change(int index, int number) {
            if(indNum.find(index)!=indNum.end()){
                int prevnum=indNum[index];
                numIndexes[prevnum].erase(index);
                if(numIndexes[prevnum].empty()){
                    numIndexes.erase(prevnum);
                }
                indNum[index]=number;
                numIndexes[number].insert(index);
            }
            else{
                indNum[index]=number;
                numIndexes[number].insert(index);
            }
        }
        
        int find(int number) {
            if(numIndexes.find(number)!=numIndexes.end()){
                return *numIndexes[number].begin();
            }
            return -1;
        }
    };
    