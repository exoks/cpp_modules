//               ################                                                         
//             ####################                                                       
//           ########################                                                     
//          #############+########### #                                                   
//          ######-..        .+########          < iter.hpp >                             
//          ####-..            ..+####                                                    
//          ###-...             .-####                                                    
//          ###...              ..+##      Student: oezzaou <oezzaou@student.1337.ma>     
//           #-.++###.      -###+..##                                                     
//           #....  ...   .-.  ....##         Created: 2023/12/07 14:17:26 by oezzaou     
//        --.#.-#+## -..  -+ ##-#-.-...       Updated: 2023/12/07 14:17:26 by oezzaou     
//         ---....... ..  ........... -                                                   
//         -+#..     ..   .       .+-.                                                    
//          .--.     .     .     ..+.                                                     
//            -..    .+--.-.     ...                                                      
//            +.... .-+#.#+.    ..-                                                       
//             +...#####-++###-..-                                                        
//             #---..----+--.---+##                                                       
//           ###-+--.... ....--+#####                                                     
//     ##########--#-.......-#-###########        Made By Oussama Ezzaou (OEZZAOU) :)     

#ifndef __ITER_HPP__
# define __ITER_HPP__
# include <iostream>

template <typename T>
void	iter(T arr[], int len, void fun(T & element));

template <typename T>
void	fun(T & element);

#endif /*__ITER_HPP__*/
