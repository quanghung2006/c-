read -p "Nhap so tien ban dang co: " tong
von=$tong
clear
PS3="Ban chon TAI hay XIU hay TONGKET[1/2/3] :"
menu=("Tai" "Xiu" "Tong_ket")
select chon in "${menu[@]}"
do 
 case $chon in
 "Tai")
 read -p "Ban chon tai, so tien muon cuoc: " c
 while [ $c -gt $tong ]
 do
  read -p "Co $tong ma doi dat $c ha, moi cuoc lai: " c
 done
 x1=$((RANDOM%6+1)) && echo Xi ngau 1: $x1
 x2=$((RANDOM%6+1)) && echo Xi ngau 2: $x2
 x3=$((RANDOM%6+1)) && echo Xi ngau 3: $x3
 (( r = $x1 + $x2 )) && (( r = $r + $x3 ))
 if [ $x1 = $x2 ] && [ $x2 = $x3 ] ; then echo Bao lon! Cai an het && (( tong = $tong - $c ))
 else
  if [ $r -ge 11 ]
  then echo "    $r=========> TAI! Ban thang $c dong" && (( tong = $tong + $c ))
                else echo "    $r=========> XIU! Ban thua $c dong" && (( tong = $tong - $c ))
  fi
 fi
 echo --------So tien ban dang co: $tong
 if [ $tong = 0 ] ; then echo "Ban da het tien, xin tam biet! " && exit
 fi
 ;;
 
 "Xiu")
 read -p "Ban chon tai, so tien muon cuoc: " c
        while [ $c -gt $tong ]
        do
                read -p "Co $tong ma doi dat $c ha, moi cuoc lai: " c
        done
 
 
 x1=$((RANDOM%6+1)) && echo Xi ngau 1: $x1
        x2=$((RANDOM%6+1)) && echo Xi ngau 2: $x2
        x3=$((RANDOM%6+1)) && echo Xi ngau 3: $x3
        (( r = $x1 + $x2 )) && (( r = $r + $x3 ))
        if [ $x1 = $x2 ] && [ $x2 = $x3 ] ; then echo Bao lon! Cai an het && (( tong = $tong - $c ))
        else
                if [ $r -le 10 ]
                then echo "    $r=========> XIU! Ban thang $c dong" && (( tong = $tong + $c ))
                else echo "    $r=========> TAI! Ban thua $c dong" && (( tong = $tong - $c ))
                fi
        fi
        echo --------So tien ban dang co: $tong
        if [ $tong = 0 ] ; then echo "Ban da het tien, xin tam biet! " && exit
        fi
   ;;

 "Tong_ket")
 (( tongket= $tong -$von ))
 if [ $tongket -ge 0 ]
 then echo "--------Tong so tien ban thang trong game la: " $tongket
 else ((tongket=$tongket \* -1 )) && echo "--------Tong so tien ban da thua trong game: " $tongket
 fi
 read -p "Ban co muon choi tiep? [y/n]" a
        while [ $a != 'y' ]
        do
  if [ $a = 'n' ] ; then exit
          fi
                read -p "Moi nhap lai [y/n] :" a
        done
 ;;

 *)
 echo Chon sai, xin chon lai:
 ;
 esac
done
