string smallestWindow (string s, string t)
    {
        if(t.length() > s.length()) return "-1";
        if(s == t) return s;
        int i=0, j =0, minlen =INT_MAX, start =-1, cnt =0;
        vector<int> mpp(26,0);
        for(auto ch: t){ 
            if(mpp[ch-'a'] == 0) cnt++;
            mpp[ch-'a']++;
        }

        while(j<s.length()){
            mpp[s[j] -'a']--;
            if(mpp[s[j] -'a'] == 0) cnt--;

            if(cnt == 0){       
                while(cnt == 0){
                    if(j-i+1 < minlen){                     
                        start= i;
                        minlen= j-i+1;
                    }
                    mpp[s[i]-'a']++;
                    if(mpp[s[i] -'a'] == 1) cnt++;
                    i++;
                }
            }
            j++;
        }
        if(minlen == INT_MAX) return "-1";
        else return s.substr(start,minlen);
    }