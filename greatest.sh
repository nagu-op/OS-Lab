

echo "enter the first number"
read num1
echo "enter the second number"
read num2

if ((num1>num2)) 
then
	echo "num1 is greater than num2"
elif ((num2>num1)) 
then
	echo "num2 is greater than num1"
else
	echo "both are equal"
fi

