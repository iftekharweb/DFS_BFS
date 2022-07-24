
//          U   R  D  L
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};


bool is_valid(ll x , ll y) {
    if(x>n-1 || x<0 || y>m-1 || y<0) return false;
    return true;
}


const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move

const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
