std::vector<int> sortByHeight(std::vector<int> a) {
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j <a.size(); j++){
            if(a[i]<a[j] && a[i]!=-1){
                swap(a[i],a[j]);
            }
        }
    }
    return a;
}
