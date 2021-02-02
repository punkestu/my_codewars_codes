std::string orderWeight(const std::string &strng){
      std::vector<int> val;
      std::vector<std::string> temp;
      for(unsigned int i = 0; i < strng.size(); i++){
        if(strng[i]!=' '){
          temp.push_back(strng.substr(i,strng.find(' ',i)));
          val.push_back(0);
          for(unsigned int j = 0; j < strng.find(' ',i)-i; j++){
            val[val.size()-1]+=temp[temp.size()-1][j]-'0';
          }
          i=strng.find(' ',i);
        }
      }
      for(unsigned int i = 1; i < temp.size(); i++){
        for(unsigned int j = 0; j < i; j++){
          if(val[j]>val[i]){
            int temp = val[j];
            val[j] = val[i];
            val[i] = temp;
            std::string tstr = temp[j];
            temp[j] = temp[i];
            temp[i] = tstr;
          }
        }
      }
      for(unsigned int i = 1; i < temp.size(); i++){
        temp[0]+=" "+temp[i];
      }
      
      return temp[0];
    }