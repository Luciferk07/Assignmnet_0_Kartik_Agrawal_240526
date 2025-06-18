vector<string> helloWorld(int N) {
    vector<string> v;
    for(int i=1; i<=N; i++){
        if(i%15==0) v.push_back("HelloWorld");
        else if(i%3==0) v.push_back("Hello");
        else if(i%5==0) v.push_back("World");
        else  v.push_back(to_string(i));
    }
    return v;
}
