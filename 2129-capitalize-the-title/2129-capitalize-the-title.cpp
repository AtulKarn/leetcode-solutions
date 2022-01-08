class Solution {
public:
    string capitalizeTitle(string title) {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        if (title.size()<3)
            return title;
        if (title[1]!=' ' && title[2]!=' ')
            title[0]-=32;
        for(int i=1;i<title.size();i++){
            if (i+2<title.size() && (title[i-1]==' ' && title[i+1]!=' ' && title[i+2]!=' '))
                title[i]-=32;
        }
        return title;
    }
};