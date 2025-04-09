int main() {
  trainingForICPC();
  Test {
    int n;cin>>n;
    auto d=vod(n);
    vii nonz;
    int lastind;
    fori(i,0,sz(d)){
      if (d[i]!=0) nonz.pb(d[i]),lastind=i;
    }
    int lz=0;
    fori(i,0,lastind){
      if (d[i]==0){
	lz++;
      }
    }    
    cout<<(sz(d)-1-lz)<<endl;
  }
}
