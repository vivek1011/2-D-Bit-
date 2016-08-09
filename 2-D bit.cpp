ll get(int x ,int y) 
{
	ll ans= 0;
	while(x > 0 )
	{
		int y1 = y ; 
		while(y1 > 0 ){
			ans+= t[x][y1];
			y1 -= (y1 & -y1); 
		}
		x-= (x & -x) ;
	}
	return ans;  
}
void update(int x, int y )
{
	while(x<=n)
	{
		int y1 =y;
		while(y1<=n){
			t[x][y1]+=1;
			y1+= (y1 & -y1);
		}
		x+= (x & -x); 
	}
}
