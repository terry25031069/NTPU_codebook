void modify(type value, int l, int r, int L, int R, vertex v){
    if(l == L && r == R){
        //打懶標在v上;
        return;
    }
    int M = (L + R) / 2;
    if(r <= M) modify(value, l, r, L, M, //v的左子節點);
    else if(l > M) modify(value, l, r, M + 1, R, //v的右子節點);
    else{
        modify(value, l, M, L, M, v的左子節點);
        modify(value, M + 1, r, M + 1, R, //v的右子節點);
    }
    //用兩個子節點的答案更新v的答案;
}
