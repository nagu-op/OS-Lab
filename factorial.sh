echo "Enter the number"
read num1
fact=1
for((i=1;i<num1+1;i++))
do fact=$(($fact*$i))
done
echo "$fact"
	
