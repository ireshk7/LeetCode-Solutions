class Solution {
public:
    char word = 'a';
    char kthCharacter(int k) {
        getword(k);
        return word[k-1];
    }
    void getword(int k){
        if(k<=1) return;
        else{
            char temp;
            int i = 0;
            while(word[i]!='\0'){
                temp.append(1,word[i]+1);
                i++;
                k--;
            }
            word.append(temp);
            getword(k);
        }
    }

};