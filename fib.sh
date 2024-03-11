echo "0"
echo "1"
limit=10

a = 0
b = 1
for((i=1;i<limit;i++))
	
do  
	a=$(($a + $b))
echo "$a"
done
