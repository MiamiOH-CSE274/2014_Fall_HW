int foo(int n){
	if( n == 0){
		return 0;
	}
	else{
		return 1 + foo(n-1);
	}
}