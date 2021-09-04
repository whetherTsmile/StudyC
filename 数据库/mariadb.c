// #include<stdio.h>
// #include<stdlib.h>
// #include "mariadb/mysql.h"
// int main(int argc, char const *argv[])
// {
//     MYSQL *conn_ptr;
//     conn_ptr = mysql_init(NULL);
//     if(!conn_ptr){
//         fprintf(stderr,"mysql_init failed\n");
//         return (EXIT_FAILURE);
//     }

//     conn_ptr = mysql_real_connect(conn_ptr, "127.0.0.1", "root", 
//     "my-secret-pw", "mysql", 0, NULL, 0);
//     if(conn_ptr)
//     {
//         printf("connection success\n");
//     }
//     else
//     {
//         printf("connection failure\n");
//     }
//     mysql_close(conn_ptr);
//     return (EXIT_SUCCESS);
// }

