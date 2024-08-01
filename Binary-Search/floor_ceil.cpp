#include<bits/stdc++.h>
using namespace std;
int floorr(vector<int> &a, int n, int x){
	int l=0,mid,s=a.size();
	int h=s-1,ans=-1;
	while(l<=h){
		mid=(l+h)/2;
		if(a[mid]<=x){
			l=mid+1;
			ans=mid;
		}
		else h=mid-1;
	}
	if(ans==-1) return ans;
	else return a[ans];
}
int ceill(vector<int> &a, int n, int x){
	int l=0,mid,s=a.size();
	int h=s-1,ans=-1;
	while(l<=h){
		mid=(l+h)/2;
		if(a[mid]>=x){
		
			h=mid-1;
			ans=mid;
		}
		else l=mid+1;
	}
	if(ans==-1) return ans;
	else return a[ans];
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int> p;
	p.first=floorr(a,n,x);
	p.second=ceill(a,n,x);

	return p;
}
