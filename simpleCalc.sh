echo "enter first number: "
read num1
echo "enter second number: "
read num2

echo -e " 1.add \n 2.difference \n 3.multiplicatoin \n 4.divion "
echo "Enter the choice"
read ch
case $ch in
1) echo "the sum is $(($num1 + $num2))"
;;
2) echo "the difference is $(($num1 - $num2))"
;;
3) echo "the product is $(($num1 * $num2))"
;;
4) echo "the result after division is $(($num1 / $num2))"
;;

esac
