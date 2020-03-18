BEGIN {
	for (i=0;i<=ARGC-1;++i){
		printf "ARGV[%d]=%s\n" ,i,ARGV[i]
	}
}
{
	print
}

# Decalring vairable outside the code and using in the block 
-v a=100 -v b=50 'NF>3 {print $2,$4,($4/a)*b}' test.txt
# Decalring vairable inside the code and using in the block 
'{a = 100,b=50} NF>3 {print $2,$4,($4/a)b}' test.txt

